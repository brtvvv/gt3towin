// @flags -fexceptions
struct Bn { char pad[0xC]; virtual ~Bn(); void name(const char *); };
struct B0 { char d[0x1D0]; };
struct B1 : B0, Bn { char q[0x14]; B1(); ~B1(); };
struct B2 { B2(); };
struct D : B1, B2 { void init(); D(const char *) asm("func_00238950"); };
D::D(const char *n) { init(); name(n); }

