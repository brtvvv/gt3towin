// @flags -fexceptions
extern char D_0032D1F0[];
struct G { int x0, x4; char p[0x140]; void s(int v) { x4 = v; } };
struct B0 { virtual ~B0(); };
struct B : B0 { int x4; void *x8, *xC; char d[0xCACC - 0x10]; G g[3]; char e[0x21C00 - 0xCACC - 0x3D8]; B(); ~B(); void set(char *); };
struct C0 { int x0, x4; C0() : x0(0), x4(0) {} virtual ~C0() {} };
struct C : C0 { char p[0x60 - 0xC]; C() {} void m(int); };
struct M1 { char d[0x2AC]; M1(); ~M1(); };
struct M2 { char d[0x540]; M2(int); ~M2(); };
struct M3B { virtual ~M3B(); };
struct M3 : M3B { char d[0xA47C - 4]; M3(); ~M3() {} };
struct M4 { M4(); };
extern "C" void func_00181FB0(B *, M3 *);
struct D : B { C c; M1 m1; M2 m2; M3 m3; M4 m4; D(int) asm("func_00189FA8"); };
D::D(int a) : m2(0) { set(D_0032D1F0); func_00181FB0(this, &m3); g[0].s(2); g[1].s(2); x8 = &m4; g[2].s(2); c.m(a); }

