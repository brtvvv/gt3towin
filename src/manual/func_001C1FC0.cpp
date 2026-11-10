// @flags -fexceptions
extern char D_003367A0[];
extern "C" char *func_00219680();
extern "C" int func_0021A558(char *, int);
extern "C" char *func_0023C448(int);
struct P { char p[0x1C]; virtual ~P(); };
struct Q { char q[0xE8]; virtual ~Q(); };
struct B : P, Q { char r[0x54]; B(int, int, int, int, int, int, int); ~B(); };
struct XB0 { char p[0x1C]; virtual ~XB0(); };
struct XM : XB0 { char r[0xE0]; XM(int, int); ~XM(); void init2(char *, int); };
struct D : B { int x160; XM m164; int x264; D(int, int, int, int, int, int, int) asm("func_001C1FC0"); };
D::D(int a, int b, int c, int d, int e, int f, int g) : B(a, b, c, d, e, 1, g), x160(g), m164(0, 0) {
    x264 = f;
    char *o = func_0023C448(func_0021A558(func_00219680(), x160));
    m164.init2(o ?: D_003367A0, c);
}

