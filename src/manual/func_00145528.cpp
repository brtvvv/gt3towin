struct S { char p[0x5C]; int a; char q[0x1D0]; char k[0x60]; int b; };
extern "C" void func_001454D0(S *, char *);
extern "C" int func_00240F88(int, char *, char *, int, int), func_00241B50(int);
extern "C" int func_00145528(S *s, int x) { char b[0x50]; func_001454D0(s, b); if (func_00240F88(x, b, s->k, 0, 0x60)) return 0; if (func_00241B50(x) < 0x60) return 0; s->a = 1; s->b = 1; return 1; }
