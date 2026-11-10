// @flags -fexceptions
extern "C" void func_0022AFE8(void *);
struct B0 { char p[0x1C]; virtual ~B0(); };
struct B : B0 { char r[0xE0]; B(int, int); ~B(); };
struct D : B { void *x100; int x104, x108, x10C, x110, x114; char x118; D(void *, int, float, float) asm("func_001396B8"); };
D::D(void *p, int n, float a, float b) : B(0, 0), x100(p), x104(0), x108(n), x10C(0), x118(0) {
    if (p) func_0022AFE8(p);
    if (a < 0) a = 0;
    if (b < 0) b = 0;
    b += a;
    x110 = (int)(a * 50.0f);
    x114 = (int)(b * 50.0f);
}

