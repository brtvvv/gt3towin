// @flags -fexceptions
struct B { int x0; virtual ~B(); B(); };
struct M { char d[0x410]; M(); };
struct D : B { int x8; char pad[0x18C]; M m1; M m2; void set(float); D() asm("func_0017E6E8"); };
D::D() { x8 = 0; set(1.0f); }

