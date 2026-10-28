// @__1T 0x21FBD0
struct Bs { Bs(); ~Bs(); char p[0x24]; };
struct M { M(int); };
struct T : Bs { int a, b, c; char pad[4]; M m; T(); };
T::T() : a(0), b(0), c(0), m(0) {}
