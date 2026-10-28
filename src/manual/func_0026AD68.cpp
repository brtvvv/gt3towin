struct P { int a, b, c, d, e, f; char pad[8]; };
extern "C" int func_00286EA0(P *);
extern "C" void func_0026ADD8(void);
extern "C" int func_0026AD68(int x) { P p; p.b = 1; p.c = x; p.f = 0; int r; while ((r = func_00286EA0(&p)) == -1) func_0026ADD8(); if (r) return r; return func_0026AD68(x); }
