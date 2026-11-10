// @flags -fexceptions
struct B0 { char p[0x1C]; virtual ~B0(); };
struct B : B0 { char q[0x1C4]; B(); ~B(); };
struct G { char p[0x2E4]; void *x2E4; };
struct R { char p[0x3C]; int x3C; };
extern "C" R *func_00136900();
struct D : B { R *x1E4; int x1E8; D(G **p) asm("func_0016D5E0"); };
D::D(G **p) { (*p)->x2E4 = this; R *r = func_00136900(); x1E4 = r; x1E8 = r->x3C; }

