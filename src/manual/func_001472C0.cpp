// @flags -fexceptions
struct B0 { int a, b; virtual ~B0(); };
struct B : B0 { char p[0x224]; B(const B &); };
struct L12 { long d[12]; };
struct C : B { L12 m; int x290; };
struct D : C { virtual ~D(); };
extern "C" D *func_001472C0(D *s) { return new D(*s); }

