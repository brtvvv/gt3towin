struct B0 { char p[8]; virtual void f(); };
struct B : B0 { B(const B &); char q[0x230 - 0xC]; };
struct M { long a[12]; };
struct Mid : B { M m; };
struct D : Mid { int x; };
extern "C" D *func_001472C0(D *s) { return new D(*s); }
