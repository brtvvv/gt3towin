// @__1T 0x1B10C0
struct Bs { Bs(); ~Bs(); char p[0x134]; };
struct M { M(void *); char q[0x84]; };
struct T : Bs { M m; int x; T(); };
T::T() : m(this) { x = 0; }
