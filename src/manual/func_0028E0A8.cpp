struct B { char d[0xFC]; };
struct S { int x0, x4; char name[0xFC]; char buf[0xFC]; };
extern S D_004B2900[]; extern char D_004B2908[]; extern char D_004B2B00[];
extern "C" int func_0028DC98(); extern "C" int func_00289DA8(void *, int, int, void *, int, void *, int, int, int); extern "C" int func_0028DD98(); extern "C" char *func_00280088(char *, char *, int); extern "C" void *func_0027EBC8(void *, void *, int);
extern "C" int func_0028E0A8(char *name, int n, void *src, int *out, int cmd) { if (func_0028DC98() < 0) return 0xFFFF0000; if (func_0028DD98()) return 0xFFFEFFFC; char *d = D_004B2908; func_00280088(d, name, 0xFC); S *s = (S *)(d - 8); s->name[0xFB] = 0; if (src) { if (n > 0xFC) { *(B *)s->buf = *(B *)src; D_004B2900[0].x0 = 0xFC; } else { func_0027EBC8(s->buf, src, n); s->x0 = n; } } else { s->buf[0] = 0; s->x0 = 0; } if (func_00289DA8(D_004B2B00, cmd, 0, D_004B2900, 0x200, D_004B2900, 8, 0, 0) < 0) return 0xFFFEFFFF; int r = D_004B2900[0].x0; *out = D_004B2900[0].x4; return r; }

