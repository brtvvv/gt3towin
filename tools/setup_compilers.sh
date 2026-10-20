#!/bin/sh
# Pobiera kompilator PS2 (Sony ee-gcc 2.9-ee-991111-01) z decomp.me do $GT3_COMPILERS.
# Binarki sa 32-bitowe (i386): na Ubuntu/Debian potrzebne libc6:i386.
set -e
DEST=${GT3_COMPILERS:-$HOME/compilers}
mkdir -p "$DEST/ee-gcc2.9-991111-01"
curl -sSfL -o /tmp/ee-gcc.tar.xz https://github.com/decompme/compilers/releases/download/compilers/ee-gcc2.9-991111-01.tar.xz
tar -xf /tmp/ee-gcc.tar.xz -C "$DEST/ee-gcc2.9-991111-01"
chmod -R +x "$DEST/ee-gcc2.9-991111-01/bin" "$DEST/ee-gcc2.9-991111-01/lib"
"$DEST/ee-gcc2.9-991111-01/bin/ee-gcc" --version
