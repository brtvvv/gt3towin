// @flags -fexceptions
extern "C" void func_0027FDBC(char *, const char *);
extern "C" int func_0026ACA0(const char *);
struct B0 { char p[0x1C]; virtual ~B0(); };
struct B : B0 { char q[0x6C]; float x8C; char r[0x34]; B(); ~B(); };
struct D : B { char xC4[0x40]; int x104, x108, x10C, x110; D(const char *, int) asm("func_001D0988"); };
D::D(const char *s, int k) : x104(k), x108(0), x10C(0) { func_0027FDBC(xC4, s); int n = func_0026ACA0(s); x110 = n; x8C = n; }

