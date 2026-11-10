extern unsigned D_00304C98[];
extern "C" unsigned func_0026DCC8(unsigned char *p, int n) { unsigned *tbl = D_00304C98; unsigned c = 0xFFFFFFFFu; unsigned char *e = p + n; if (n) do { c = tbl[(c ^ *p++) & 0xFF] ^ (c >> 8); } while (p != e); return ~c; }

