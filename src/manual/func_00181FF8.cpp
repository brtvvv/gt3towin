// @flags -fexceptions
struct B0 { virtual ~B0(); };
struct B : B0 { char d[0xC8BC]; B(); ~B(); };
struct M { M(); ~M(); };
struct D : B { M m; void set(M *); D() asm("func_00181FF8"); };
D::D() { set(&m); }

