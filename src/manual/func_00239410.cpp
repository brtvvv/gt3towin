// @flags -fexceptions
extern char D_002ED3B8[];
struct B { char pad[0xC]; virtual ~B(); B(); void name(const char *); };
struct D : B { void init(); D() asm("func_00239410"); };
D::D() { init(); name(D_002ED3B8); }

