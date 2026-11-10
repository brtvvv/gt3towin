struct H { int x0, x4, x8, xC; };
extern "C" int func_0026DCC8(unsigned char *, int);
extern "C" int func_00243FE8(int a, H *h) { unsigned char *p = (unsigned char *)h + h->x0; if (h->xC != func_0026DCC8(p, h->x4)) return 0; unsigned char *q = p, *e = p + h->x4; while (q != e) { *q = ~*q; q++; } return 1; }

