// @flags -fexceptions
extern "C" int func_0026AD68(int);
struct B { char p[0x2C]; void *x2C; int x30; int x34; virtual ~B(); B(); };
struct D : B { int x3C; int x40; char pad[0xC]; char buf[16]; D() asm("func_0025C5B0"); };
D::D() : x3C(0) { x2C = buf; x30 = 16; x40 = func_0026AD68(0); }

