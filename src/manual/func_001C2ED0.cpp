// @flags -fexceptions
extern char D_00353FA8[];
extern "C" int func_001C3670(int, char *);
extern "C" int func_001C36B0(int, int);
struct XB0 { char p[0x1C]; virtual ~XB0(); };
struct XM : XB0 { char r[0xE0]; XM(int, int); ~XM(); void init(int, int); };
struct D : XM { int x100, x104; XM m108; D(int, int, int, int, int) asm("func_001C2ED0"); };
D::D(int a, int b, int c, int d, int e) : XM(0, 0), x100(a), x104(b), m108(0, 0) {
    init(d, e);
    int o = func_001C3670(c, D_00353FA8);
    if (o) m108.init(o, func_001C36B0(c, o));
}

