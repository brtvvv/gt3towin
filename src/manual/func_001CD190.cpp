// @flags -fexceptions
struct L { int x0, x4, x8, xC; char p[0x30]; L(); ~L(); void m1(); void m2(); void m6(); };
extern "C" void func_00255C48(int, int, int, int, int, int, int, char *);
extern "C" void func_002557B0();
extern "C" void func_00255478(int, int);
extern "C" int func_00256880(int);
extern "C" void func_002512B0(int, int, int, int, int);
struct D { char p[0x28]; float x28; char q[8]; float x34, x38, x3C; char r[0x114 - 0x40]; char *x114; int x118, x11C;
    void f() asm("func_001CD190"); void m3(int); void m4(int, float, float, float, float); void m5(int, int, int); };
void D::f() {
    L l;
    l.x8 = x118; l.xC = x11C; l.x4 = 0;
    l.m1();
    char *p = x114;
    for (int y = 0; y < x11C; y += 16)
        for (int x = 0; x < x118; x += 16) { int b4 = l.x4; func_00255C48(l.x0, b4, (l.x8 + 63) & ~63, x, y, 16, 16, p); p += 0x400; }
    func_002557B0();
    l.m2();
    func_00255478(2, 1); func_00255478(3, 1);
    int a = func_00256880(1); m3(a);
    int b = func_00256880(3); m4(b, x28, x34, x38, x3C);
    int c = func_00256880(2); m5(c, x118, x11C);
    func_002512B0(b, 0, a, c, 4);
    l.m6();
}

