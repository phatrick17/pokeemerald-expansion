#!/usr/bin/env python3
"""
Convert a 224x120 custom map image into the tile sheet (map.png) and
tilemap (map.bin) format used by pokeemerald-expansion's region map.

Usage:
    python3 tools/convert_region_map.py <input_map.png>

The input image must be:
  - Exactly 224x120 pixels (28 tiles wide x 15 tiles tall, at 8px per tile)
  - 256-color indexed PNG (palette mode 'P')

Output:
  - graphics/pokenav/region_map/map.png  (tile sheet, ready to build)
  - graphics/pokenav/region_map/map.bin  (64x64 affine tilemap)
"""

import sys
import struct
from pathlib import Path

try:
    from PIL import Image
except ImportError:
    sys.exit("Pillow is required: pip install Pillow")

MAP_TILES_W = 28      # tiles wide (visible map area)
MAP_TILES_H = 15      # tiles tall (visible map area)
TILE_SIZE   = 8       # pixels per tile side
TILEMAP_DIM = 64      # affine tilemap is 64x64 entries
SHEET_TILES_PER_ROW = 16  # tile sheet layout: 16 tiles per row
MAX_TILES   = 256     # affine BG supports 8-bit tile indices (0-255)

OUT_MAP_PNG = Path("graphics/pokenav/region_map/map.png")
OUT_MAP_BIN = Path("graphics/pokenav/region_map/map.bin")


def tile_bytes(img_data, img_width, tx, ty):
    """Return the raw pixel bytes for the 8x8 tile at grid position (tx, ty)."""
    px = tx * TILE_SIZE
    py = ty * TILE_SIZE
    rows = []
    for y in range(TILE_SIZE):
        row = img_data[py + y][px: px + TILE_SIZE]
        rows.append(bytes(row))
    return b"".join(rows)


def main():
    if len(sys.argv) != 2:
        sys.exit(f"Usage: {sys.argv[0]} <input_map.png>")

    input_path = Path(sys.argv[1])
    if not input_path.exists():
        sys.exit(f"File not found: {input_path}")

    img = Image.open(input_path)

    # ---- validate dimensions ------------------------------------------------
    expected_w = MAP_TILES_W * TILE_SIZE   # 224
    expected_h = MAP_TILES_H * TILE_SIZE   # 120

    if img.size != (expected_w, expected_h):
        sys.exit(
            f"Image must be {expected_w}x{expected_h} pixels "
            f"(got {img.width}x{img.height}).\n"
            f"Resize your map to exactly {expected_w}x{expected_h} px."
        )

    # ---- ensure indexed palette mode ----------------------------------------
    if img.mode != "P":
        print(f"Converting from {img.mode} to indexed 256-color palette...")
        img = img.quantize(colors=256)
    else:
        # Make sure the palette has exactly 256 entries
        pass

    palette_bytes = img.palette.tobytes()
    if len(palette_bytes) < 256 * 3:
        # Pad palette to 256 colors
        palette_bytes = palette_bytes + b"\x00" * (256 * 3 - len(palette_bytes))

    # ---- read pixel data as 2-D array ----------------------------------------
    pixels = list(img.getdata())
    img_array = [pixels[row * img.width: (row + 1) * img.width] for row in range(img.height)]

    # ---- extract & deduplicate 8x8 tiles -------------------------------------
    tile_to_index = {}   # tile_bytes -> tile_index
    tile_list     = []   # ordered list of unique tile bytes (index = position in list)

    tilemap_area = []  # 15 rows x 28 cols of tile indices

    for ty in range(MAP_TILES_H):
        row_indices = []
        for tx in range(MAP_TILES_W):
            tb = tile_bytes(img_array, img.width, tx, ty)
            if tb not in tile_to_index:
                if len(tile_list) >= MAX_TILES:
                    sys.exit(
                        f"Too many unique tiles ({len(tile_list)}+)!\n"
                        "The region map supports at most 256 unique 8x8 tiles.\n"
                        "Simplify your map image (reduce detail/colors, use flat areas)."
                    )
                tile_to_index[tb] = len(tile_list)
                tile_list.append(tb)
            row_indices.append(tile_to_index[tb])
        tilemap_area.append(row_indices)

    num_unique = len(tile_list)
    print(f"Unique tiles: {num_unique} / {MAX_TILES}")

    # ---- build the 64x64 affine tilemap (4096 bytes) -------------------------
    tilemap = bytearray(TILEMAP_DIM * TILEMAP_DIM)  # all zeros
    for ty in range(MAP_TILES_H):
        for tx in range(MAP_TILES_W):
            tilemap[ty * TILEMAP_DIM + tx] = tilemap_area[ty][tx]

    # ---- build the tile sheet PNG --------------------------------------------
    sheet_cols = SHEET_TILES_PER_ROW
    sheet_rows = (num_unique + sheet_cols - 1) // sheet_cols
    sheet_w    = sheet_cols * TILE_SIZE   # 128
    sheet_h    = sheet_rows * TILE_SIZE

    sheet_pixels = [0] * (sheet_w * sheet_h)

    for idx, tb in enumerate(tile_list):
        col = idx % sheet_cols
        row = idx // sheet_cols
        for y in range(TILE_SIZE):
            for x in range(TILE_SIZE):
                sheet_pixels[(row * TILE_SIZE + y) * sheet_w + (col * TILE_SIZE + x)] = tb[y * TILE_SIZE + x]

    sheet_img = Image.new("P", (sheet_w, sheet_h))
    sheet_img.putpalette(palette_bytes)
    sheet_img.putdata(sheet_pixels)

    # ---- write outputs -------------------------------------------------------
    OUT_MAP_PNG.parent.mkdir(parents=True, exist_ok=True)
    sheet_img.save(OUT_MAP_PNG)
    OUT_MAP_BIN.write_bytes(tilemap)

    print(f"Written: {OUT_MAP_PNG}  ({sheet_w}x{sheet_h} px, {num_unique} tiles)")
    print(f"Written: {OUT_MAP_BIN}  ({len(tilemap)} bytes)")
    print()
    print("Next steps:")
    print("  make  (the build system will compress map.png -> .8bpp.smol and map.bin -> .bin.smolTM)")


if __name__ == "__main__":
    main()
