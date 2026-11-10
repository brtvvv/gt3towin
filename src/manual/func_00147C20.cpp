// @flags -fexceptions
struct B0 { int a, b; virtual ~B0(); };
struct B : B0 { char p[0x64]; B(const B &); };
struct S { char d[0x200]; };
struct D : B { S m; };
extern "C" D *func_00147C20(D *s) { return new D(*s); }

