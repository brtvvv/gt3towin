struct E { unsigned x0; char p[0x14]; };
struct H { unsigned x0; int x4; int x8; unsigned xC; int x10; int x14; unsigned x18; E *x1C; unsigned x20; int *x24; };
extern "C" H *func_00269868(H *h, unsigned base) { if (h->x0 != 0x54534E49) return 0; int d = (int)h - h->x4; h->x14 += d; h->x1C = (E *)((int)h->x1C + d); h->x4 = (int)h; h->x24 = (int *)((int)h->x24 + d); unsigned i; for (i = 0; i < h->x20; i++) h->x24[i] += d; if (base) { unsigned o = base - h->xC; h->xC = base; for (i = 0; i < h->x18; i++) h->x1C[i].x0 += o >> 3; } return h; }

