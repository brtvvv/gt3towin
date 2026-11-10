// @flags -fexceptions
struct V3 { float a, b, c; void set(float x, float y, float z) { a = x; c = z; b = y; } };
struct P { char p[0x1C]; virtual ~P(); };
struct Q { V3 v20, v2C; float x38, x3C; char q[0x78]; virtual ~Q(); };
struct S { void m(int); };
struct B : P, Q { char r[0x14]; S xD0; char r2[0x24]; B(int, int, int); ~B(); void init(int, int, int); void m(); };
struct D : B { char e[0x30]; D(int, int, int, int, int, int, int, float, float, float, float) asm("func_001169A0"); };
D::D(int a, int b, int c, int d, int e, int f, int g, float x, float y, float z, float w) : B(a, b, c) {
    v20.set(0, 0, x); v2C.set(0, 0, y); x38 = z; x3C = w;
    init(d, e, 0); m(); xD0.m(g);
}

