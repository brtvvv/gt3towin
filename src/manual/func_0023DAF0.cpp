struct X { char p[0x14]; int *a; int b; };
struct S { char p[0x240]; int h; char q[8]; int a; int b; };
extern char D_002F49E0[];
extern "C" X *func_002428C8(char *, int, int, int, char *);
extern "C" void func_0023DB78(S *, int);
extern "C" int func_0024ADF0(X *);
extern "C" int func_0023DAF0(S *s, char *n) { X *x = func_002428C8(n, 0, 0, 1, D_002F49E0); if (!x) return -1; if (s->h) func_0023DB78(s, 0); int h = func_0024ADF0(x); int *pa = x->a; int b = x->b; int a = *pa; s->h = h; s->a = a; s->b = b; return 0; }
