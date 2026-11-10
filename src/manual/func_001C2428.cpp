struct T { char *x0, *x4, *x8, *xC, *x10, *x14, *x18, *x1C; int x20; };
extern "C" int func_001B4820(); extern "C" char *func_0026BCA0(int, unsigned, int);
extern "C" T *func_001C2428(T *t, int n) { unsigned sz = n * 0x2C8; t->x20 = n; if (!sz) sz = 0x10; char *p = func_0026BCA0(func_001B4820(), sz, 0x10); for (unsigned i = 0; i < sz; i++) p[i] = 0; int k = t->x20; t->x0 = p; char *q = p + k * 4; t->x4 = q; t->x1C = p; q += k * 0x14C; t->x8 = q; q += k * 0x6C; t->xC = q; q += k * 0x6C; t->x10 = q; q += k * 16; t->x14 = q; q += k * 16; t->x18 = q; return t; }

