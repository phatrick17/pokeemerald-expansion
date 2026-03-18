#!/usr/bin/env python3
"""
Convert a custom map image into the tile sheet (map.png) and
tilemap (map.bin) format used by the custom fly map screen.

Usage:
    python3 tools/convert_region_map.py <input_map.png>

The input image must be:
  - Up to 256x256 pixels (32 tiles wide x 32 tiles tall, at 8px per tile)
  - 256-color indexed PNG (palette mode 'P'), or will be auto-quantized

Output (into graphics/custom_map/):
  - map.png   (tile sheet with unique 8x8 tiles, 8bpp indexed)
  - map.bin   (32x32 text-mode tilemap, 2 bytes per entry)
"""

import sys
import struct
from pathlib import Path

try:
    from PIL import Image
except ImportError:
    sys.exit("Pillow is required: pip install Pillow")

TILE_SIZE   = 8       # pixels per tile side
TILEMAP_DIM = 32      # text-mode tilemap is 32x32 entries
SHEET_TILES_PER_ROW = 16  # tile sheet layout: 16 tiles per row
MAX_TILES   = 640     # practical limit based on VRAM layout (charbase 1 to mapbase 28)

OUT_DIR     = Path("graphics/custom_map")
OUT_MAP_PNG = OUT_DIR / "map.png"
OUT_MAP_BIN = OUT_DIR / "map.bin"


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
    max_w = TILEMAP_DIM * TILE_SIZE  # 256
    max_h = TILEMAP_DIM * TILE_SIZE  # 256

    if img.width > max_w or img.height > max_h:
        sys.exit(
            f"Image must be at most {max_w}x{max_h} pixels "
            f"(got {img.width}x{img.height})."
        )

    if img.width % TILE_SIZE != 0 or img.height % TILE_SIZE != 0:
        sys.exit(
            f"Image dimensions must be multiples of {TILE_SIZE} "
            f"(got {img.width}x{img.height})."
        )

    map_tiles_w = img.width // TILE_SIZE
    map_tiles_h = img.height // TILE_SIZE
    print(f"Map size: {img.width}x{img.height} px = {map_tiles_w}x{map_tiles_h} tiles")

    # ---- ensure indexed palette mode ----------------------------------------
    if img.mode != "P":
        print(f"Converting from {img.mode} to indexed 256-color palette...")
        img = img.quantize(colors=256)

    palette_bytes = img.palette.palette or img.palette.tobytes()
    if isinstance(palette_bytes, str):
        palette_bytes = bytes(palette_bytes, "latin-1")
    if len(palette_bytes) < 256 * 3:
        palette_bytes = palette_bytes + b"\x00" * (256 * 3 - len(palette_bytes))

    # ---- read pixel data as 2-D array ----------------------------------------
    pixels = list(img.getdata())
    img_array = [pixels[row * img.width: (row + 1) * img.width] for row in range(img.height)]

    # ---- extract & deduplicate 8x8 tiles -------------------------------------
    tile_to_index = {}
    tile_list     = []

    tilemap_area = []

    for ty in range(map_tiles_h):
        row_indices = []
        for tx in range(map_tiles_w):
            tb = tile_bytes(img_array, img.width, tx, ty)
            if tb not in tile_to_index:
                if len(tile_list) >= MAX_TILES:
                    sys.exit(
                        f"Too many unique tiles ({len(tile_list)}+)!\n"
                        f"The custom map supports at most {MAX_TILES} unique 8x8 tiles.\n"
                        "Simplify your map image (reduce detail/colors, use flat areas)."
                    )
                tile_to_index[tb] = len(tile_list)
                tile_list.append(tb)
            row_indices.append(tile_to_index[tb])
        tilemap_area.append(row_indices)

    num_unique = len(tile_list)
    print(f"Unique tiles: {num_unique} / {MAX_TILES}")

    # ---- build the 32x32 text-mode tilemap (2048 bytes) ----------------------
    # Text-mode tilemap entries are 16-bit (little-endian):
    #   bits 0-9:   tile index (0-1023)
    #   bit  10:    horizontal flip
    #   bit  11:    vertical flip
    #   bits 12-15: palette number (unused for 8bpp, set to 0)
    tilemap = bytearray(TILEMAP_DIM * TILEMAP_DIM * 2)  # 2 bytes per entry
    for ty in range(map_tiles_h):
        for tx in range(map_tiles_w):
            idx = tilemap_area[ty][tx]
            offset = (ty * TILEMAP_DIM + tx) * 2
            struct.pack_into("<H", tilemap, offset, idx)

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
    OUT_DIR.mkdir(parents=True, exist_ok=True)
    sheet_img.save(OUT_MAP_PNG)
    OUT_MAP_BIN.write_bytes(tilemap)

    print(f"Written: {OUT_MAP_PNG}  ({sheet_w}x{sheet_h} px, {num_unique} tiles)")
    print(f"Written: {OUT_MAP_BIN}  ({len(tilemap)} bytes, {TILEMAP_DIM}x{TILEMAP_DIM} text-mode tilemap)")
    print()
    print("Next steps:")
    print("  make  (the build system will compress map.png -> .8bpp.lz and map.bin -> .bin.lz)")


if __name__ == "__main__":
    main()
