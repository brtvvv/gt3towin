// @flags -fexceptions
typedef void (*F)(void *, char *, int);
struct B0 { char p[0x1C]; virtual ~B0(); };
struct B : B0 { char r[0xE0]; B(int, int); ~B(); };
struct D : B { F x100; void *x104; char x108[0x80]; int x188; D(F, void *, int, int, int) asm("func_001C7C60"); };
D::D(F f, void *arg, int b0, int b1, int flag) : B(b0, b1), x100(f), x104(arg), x188(flag) { if (flag) f(arg, x108, 0x80); }

