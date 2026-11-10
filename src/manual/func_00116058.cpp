// @flags -fexceptions
struct B0 { char p[0x1C]; virtual ~B0(); };
struct B : B0 { char r[0xE0]; B(const char *, int); ~B(); };
struct D : B { int x100; float x104, x108; int x10C; float x110; int x114, x118, x11C, x120; void m(int); D(int, const char *, int, int) asm("func_00116058"); };
D::D(int a, const char *s, int n, int z) : B(s, n), x100(a), x104(30.0f), x108(230.0f), x10C(0), x110(1.0f), x114(0), x118(1), x11C(0), x120(0) { m(z); }

