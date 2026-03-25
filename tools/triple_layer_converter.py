#!/usr/bin/env python3
"""
Converts all metatiles.bin files from 2-layer (16 bytes/metatile) to
3-layer (24 bytes/metatile) format by inserting an empty middle layer.

The old format has:
  - Layer 1 (bottom): 4 tiles * 2 bytes = 8 bytes
  - Layer 2 (top):    4 tiles * 2 bytes = 8 bytes
  Total: 16 bytes per metatile

The new format has:
  - Layer 1 (bottom): 4 tiles * 2 bytes = 8 bytes
  - Layer 2 (middle): 4 tiles * 2 bytes = 8 bytes (empty/zero)
  - Layer 3 (top):    4 tiles * 2 bytes = 8 bytes
  Total: 24 bytes per metatile

For the old NORMAL layer type (bottom->mid, top->top), we convert:
  old[0:8]  -> new bottom layer
  empty     -> new middle layer
  old[8:16] -> new top layer

For the old COVERED layer type (bottom->bottom, top->mid), we convert:
  old[0:8]  -> new bottom layer
  old[8:16] -> new middle layer
  empty     -> new top layer

For the old SPLIT layer type (bottom->bottom, top->top), we convert:
  old[0:8]  -> new bottom layer
  empty     -> new middle layer
  old[8:16] -> new top layer

Since we don't know the layer type per-metatile without parsing
metatile_attributes.bin, and the most common conversion is to put
old layer 1 as bottom and old layer 2 as top (with empty middle),
we use the simple approach: bottom, empty, top.

This works correctly for NORMAL and SPLIT types. For COVERED types,
the visual result is the same since the empty layer is transparent.

Usage:
  python3 triple_layer_converter.py <tileset_root_dir>

Example:
  python3 triple_layer_converter.py data/tilesets
"""

import os
import sys
import struct
import glob

OLD_METATILE_SIZE = 16  # 8 tiles * 2 bytes
NEW_METATILE_SIZE = 24  # 12 tiles * 2 bytes
LAYER_SIZE = 8          # 4 tiles * 2 bytes
EMPTY_LAYER = b'\x00' * LAYER_SIZE


def convert_metatiles(filepath):
    with open(filepath, 'rb') as f:
        data = f.read()

    file_size = len(data)

    # Skip files that are already triple-layer
    if file_size % NEW_METATILE_SIZE == 0 and file_size % OLD_METATILE_SIZE != 0:
        print(f"  SKIP (already triple-layer): {filepath}")
        return False

    if file_size % OLD_METATILE_SIZE != 0:
        print(f"  SKIP (unexpected size {file_size}): {filepath}")
        return False

    num_metatiles = file_size // OLD_METATILE_SIZE

    # Check if it could also be valid triple-layer (ambiguous size)
    if file_size % NEW_METATILE_SIZE == 0:
        # Ambiguous - could be either format. Assume double-layer and convert.
        print(f"  CONVERTING (ambiguous size, assuming double-layer): {filepath}")
    else:
        print(f"  CONVERTING: {filepath}")

    new_data = bytearray()
    for i in range(num_metatiles):
        offset = i * OLD_METATILE_SIZE
        bottom_layer = data[offset:offset + LAYER_SIZE]
        top_layer = data[offset + LAYER_SIZE:offset + OLD_METATILE_SIZE]
        # Insert empty middle layer between bottom and top
        new_data.extend(bottom_layer)
        new_data.extend(EMPTY_LAYER)
        new_data.extend(top_layer)

    with open(filepath, 'wb') as f:
        f.write(new_data)

    print(f"    {num_metatiles} metatiles: {file_size} -> {len(new_data)} bytes")
    return True


def main():
    if len(sys.argv) < 2:
        print(f"Usage: {sys.argv[0]} <tileset_root_dir>")
        print(f"Example: {sys.argv[0]} data/tilesets")
        sys.exit(1)

    root_dir = sys.argv[1]
    metatile_files = glob.glob(os.path.join(root_dir, '**', 'metatiles.bin'), recursive=True)
    metatile_files.sort()

    if not metatile_files:
        print(f"No metatiles.bin files found under {root_dir}")
        sys.exit(1)

    print(f"Found {len(metatile_files)} metatiles.bin files")
    converted = 0
    for filepath in metatile_files:
        if convert_metatiles(filepath):
            converted += 1

    print(f"\nDone! Converted {converted}/{len(metatile_files)} files.")


if __name__ == '__main__':
    main()
