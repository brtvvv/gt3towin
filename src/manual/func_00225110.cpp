// @__1T 0x225110
struct Bs { Bs(); ~Bs(); char p[0x90]; virtual void f(); };
struct M { M(); char q[0x30]; };
struct T : Bs { M m; int x; T(); virtual void f(); };
T::T() { x = 0; }
