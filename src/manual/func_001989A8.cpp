// @flags -fexceptions
extern char D_003539C0[], D_003539E0[];
struct B { char p[0x12]; char x12; char p2; virtual ~B(); B(); };
struct D : B { float x18, x1C, x20, x24; unsigned int x28; int x2C; void m1(const char *, float, float); void m2(const char *); D() asm("func_001989A8"); };
D::D() { x18 = 0; x1C = 0; x20 = 0; x24 = 0; x2C = 0; x12 = 0; m1(D_003539C0, x18, x18); x28 = 0x80D0D0D0u; m2(D_003539E0); }

