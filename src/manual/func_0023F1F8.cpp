// @flags -fexceptions
struct B { char p[0x3014]; int x3014; char q[0x14]; int x302C; virtual ~B(); B(); void m(int, int); void m2(int); };
struct D : B { int x3034, x3038, x303C, x3040; void init(); D(int, int, int, int) asm("func_0023F1F8"); };
D::D(int a, int b, int c, int d) : x3038(a), x303C(c), x3040(d) { init(); m(x303C, x3040); x3014 = b; x302C = b; m2(0); }

