// @flags -fexceptions
struct B { char pad[0x14]; virtual ~B(); B(); };
struct D : B { int x18; void set(int); D() asm("func_001980F0"); };
D::D() { x18 = 0; set(6); }

