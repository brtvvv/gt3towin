# Rozpakowuje CORE.GT3 (Gran Turismo 3) do surowego kodu dla Ghidry.
# Uzycie: python extract_core.py CORE.GT3 core_100000.bin
import sys, zlib
d = open(sys.argv[1], 'rb').read()
raw = zlib.decompressobj(-15).decompress(d[6:])   # 6 bajtow naglowka, potem deflate
hdr = raw[:0x114]                                  # 0x100 bajtow + wersja/entry/adres/rozmiar
entry, load, size = (int.from_bytes(hdr[o:o+4], 'little') for o in (0x108, 0x10C, 0x110))
open(sys.argv[2], 'wb').write(raw[0x114:])
print(f'adres ladowania 0x{load:X}, entry 0x{entry:X}, rozmiar 0x{size:X}')
