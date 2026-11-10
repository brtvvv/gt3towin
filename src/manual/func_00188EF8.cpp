// @flags -fexceptions
extern char D_0032CA40[];
struct B0 { virtual ~B0(); };
struct B : B0 { int x4; void *x8, *xC; char d[0x21BF0]; B(); ~B(); void set(char *); };
struct E { char d[0x2044]; E(); };
struct C0 { int x0, x4; C0() : x0(0), x4(0) {} virtual ~C0() {} };
struct C : C0 { char p[0x24 - 0xC]; C() {} };
struct M1B { char d[8]; M1B(); virtual ~M1B(); char e[0x2D0 - 0xC]; };
struct M2 { char d[0x540]; M2(int); ~M2(); };
struct M3 { char d[0xA4A4]; void *xA4A4; char e[4]; M3(); ~M3(); };
struct M4 { M4(); };
extern "C" void func_00181FB0(B *, M3 *);
struct D : B { int x21C00; E arr[7]; C c; M1B m1; M2 m2; M3 m3; M4 m4; D(int) asm("func_00188EF8"); };
D::D(int a) : x21C00(a), m2(0) { set(D_0032CA40); M3 *p = &m3; func_00181FB0(this, p); char *v = (char *)this + 0xC8C0; p->xA4A4 = v; x8 = &m4; }

