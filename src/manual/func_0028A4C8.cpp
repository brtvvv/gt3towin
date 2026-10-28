struct P { int a, b, c, d, e, f; };
extern int D_003098D8[], D_003098DC[];
extern "C" int func_00286EA0(P *);
extern "C" void func_0028A4C8(void) { if (D_003098D8[0] == -1) { P p; p.f = 0; p.c = 1; p.b = 1; D_003098D8[0] = func_00286EA0(&p); D_003098DC[0] = func_00286EA0(&p); } }

