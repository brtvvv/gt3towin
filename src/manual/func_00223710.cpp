// @__1T 0x223710
struct Bs { Bs(); ~Bs(); char p[0x2C]; virtual void w(); };
struct M { M(); int a; };
struct T : Bs { virtual void v(); int x30, x34, x38, x3C, x40; M m; int x48; T(); };
T::T() { x34 = 0; x30 = 1; x48 = 0; x3C = 0; x40 = 0; x38 = 0; }
