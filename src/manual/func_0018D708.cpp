// @__1T 0x18D708
struct Bs { Bs(); ~Bs(); char p[0x48]; int k; char q[8]; virtual void f(); };
struct M { M(); };
struct T : Bs { int pad; int x; M m; T(); virtual void f(); };
T::T() { x = 0; k = 2; }
