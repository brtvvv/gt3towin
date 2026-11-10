// @flags -fexceptions
extern char D_0032D8A0[];
struct M4 { char d[0xA694]; void *xA694; char e[4]; M4(); ~M4(); };
struct B0 { virtual ~B0(); };
struct B : B0 { int x4; void *x8, *xC; char d[0x21BF0]; B(); ~B(); void set(char *); };
extern "C" void func_00181FB0(B *, M4 *);
struct M1B { char d[8]; M1B(); virtual ~M1B(); };
struct M1 : M1B { char e[0x2D0 - 0xC]; M1() {} ~M1(); };
struct M2 { char d[0x540]; M2(int); ~M2(); };
struct M3 { char d[0x9B8]; M3(); ~M3(); };
struct M5 { M5(); };
struct D : B { M1 m1; M2 m2; M3 m3; M4 m4; M5 m5; D() asm("func_0018ABC0"); };
D::D() : m2(0) { set(D_0032D8A0); M4 *p = &m4; func_00181FB0(this, p); char *v = (char *)this + 0xC8C0; p->xA694 = v; x8 = &m5; xC = &m3; }

