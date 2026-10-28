// @__1T 0x23AE98
struct Bs { Bs(); ~Bs(); virtual void f(); };
struct M { M(); };
struct T : Bs { int pad; M m; T(); virtual void f(); };
T::T() {}
