// @flags -fexceptions
extern float D_0035171C;
struct B { char pad[0x14]; virtual ~B(); B(); };
struct D : B { int x18, x1C, x20; char q[0x20]; float x44; void init(); D() asm("func_001985E0"); };
D::D() { init(); x20 = 3; x44 = D_0035171C; }

