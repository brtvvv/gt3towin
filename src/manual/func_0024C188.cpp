struct E { unsigned char lo, hi; short pad; unsigned short *tbl; };
extern E D_002F8870[];
extern "C" unsigned short func_0024C188(unsigned i, int c) { if (i < 16) { E *e = &D_002F8870[i]; if (c >= e->lo && c <= e->hi) return e->tbl[c - e->lo]; } return 0xFFFF; }

