struct S { int x0, x4; union { unsigned char b; unsigned short h; int w; } v; };
extern S D_004B2900[]; extern char D_004B2B00[];
extern "C" int func_0028DC98(); extern "C" int func_00289DA8(void *, int, int, void *, int, void *, int, int, int);
extern "C" int func_0028E550(int a, void *p, int sz) { if (func_0028DC98() < 0) return 0xFFFF0000; S *s = D_004B2900; s->x0 = a; s->x4 = sz; if (sz == 0) s->v.b = *(unsigned char *)p; else if (sz == 1) s->v.h = *(unsigned short *)p; else if (sz == 2) s->v.w = *(int *)p; else return 0xFFFEFFFE; if (func_00289DA8(D_004B2B00, 2, 0, D_004B2900, 0x20, D_004B2900, 0x10, 0, 0) < 0) return 0xFFFEFFFF; return 0; }

