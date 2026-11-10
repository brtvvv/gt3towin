// @flags -fexceptions
typedef int (*F)(void *);
struct B0 { char p[0x1C]; virtual ~B0(); };
struct B : B0 { char r[0xE0]; B(int, int); ~B(); };
struct D : B { F x100; void *x104; int x108; int x10C; D(F, void *, int, int, int) asm("func_001C5ED8"); };
D::D(F f, void *arg, int b0, int b1, int flag) : B(b0, b1), x100(f), x104(arg), x10C(flag) { if (flag) x108 = f(arg); }

