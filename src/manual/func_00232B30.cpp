// @flags -fexceptions
extern char D_002ED3B8[];
struct B0 { char d[0x1D0]; void init(); };
struct B { char pad[0xC]; virtual ~B(); B(); void name(const char *); };
struct D : B0, B { D() asm("func_00232B30"); };
D::D() { init(); name(D_002ED3B8); }

