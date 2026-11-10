// @flags -fexceptions
struct M { char pad[0x38]; M(); ~M(); };
struct D { M m; int a, b; virtual void v(); void init(); D() asm("func_001F52D8"); };
D::D() { a = 0; b = 0; init(); }

