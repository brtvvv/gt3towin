// @flags -fexceptions
struct B0 { char p[0x1C]; virtual ~B0(); };
struct B : B0 { char q[0x1C4]; B(int *); ~B(); };
struct D : B { int x1E4, x1E8; void init(); D(int *p) asm("func_00171558"); };
D::D(int *p) : B(p) { init(); x1E8 = *p; }

