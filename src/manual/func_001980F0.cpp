// @__1T 0x1980F0
struct Bs { Bs(); ~Bs(); char p[0x14]; virtual void f(); };
struct T : Bs { int a; T(); virtual void f(); void g(int); };
T::T() : a(0) { g(6); }
