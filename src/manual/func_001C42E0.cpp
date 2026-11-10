// @flags -fexceptions
extern char D_00353FB8[];
extern "C" int func_001C3670(int, char *);
extern "C" int func_001C36B0(int, int);
struct XB0 { char p[0x1C]; virtual ~XB0(); };
struct XM : XB0 { char r[0xE0]; XM(int, int); ~XM(); void init(int, int); };
struct D : XM { int x100, x104; XM m108; D(int, int, int, int) asm("func_001C42E0"); };
D::D(int a, int b, int c, int d) : XM(c, d), x100(a), m108(0, 0) { int r = func_001C3670(b, D_00353FB8); x104 = r; if (r) m108.init(x104, func_001C36B0(b, r)); }

