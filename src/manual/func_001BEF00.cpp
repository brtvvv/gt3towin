// @flags -fexceptions
extern "C" int func_0021A480(int, int);
extern "C" void func_0023C190(int, void *, void *);
struct P { char p[0x1C]; virtual ~P(); };
struct Q { char q[0xE8]; virtual ~Q(); };
struct B : P, Q { char r[0x54]; B(int, int, int, int, int, int, int); ~B(); };
struct XB0 { char p[0x1C]; virtual ~XB0(); };
struct XM : XB0 { char r[0xE0]; XM(int, int); ~XM(); };
struct D : B { int x160, x164, x168, x16C; XM m170, m270; int x370; char pad[0x40]; int x3B4, x3B8;
    D(int, int, int, int, int, int, int, int, int, int) asm("func_001BEF00"); };
D::D(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int s60, int s68, int s70)
    : B(a2, a3, a4, a5, a6, 1, s68), x160(a1), x164(s68), x168(a7), x16C(s60), m170(0, 0), m270(0, 0) {
    x370 = s70;
    func_0023C190(func_0021A480(x160, x164), &x3B4, &x3B8);
}

