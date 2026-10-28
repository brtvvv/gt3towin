// @__1T 0x1D6B50
struct Bs0 { char p[0x1C]; virtual void f(); };
struct Bs : Bs0 { Bs(); ~Bs(); char q[0x1C4]; };
struct M { M(); char m[0x14]; };
struct T : Bs { M m; int a, b, c; T(); virtual void f(); };
T::T() { a = 0; b = 0; c = 0; }
