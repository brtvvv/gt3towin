struct S { int a, b; };
extern "C" int func_0022C608(int);
extern "C" void func_0022C318(S *, int), func_0022BCB0(S *, int);
extern "C" S *func_0022C7D0(S *r, int x) { int k = func_0022C608(x); switch (k) { case 0: func_0022C318(r, x); break; case 1: func_0022BCB0(r, x - 0x12); break; default: r->a = 0; r->b = 0; } return r; }
