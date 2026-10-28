// @__1Ti 0x2114C0
struct Bs { Bs(); ~Bs(); char p[0xC0]; virtual void w(); };
struct M { M(); char p[0x60]; };
struct T : Bs { M m; int x124, x128, x12C, x130, x134, x138, x13C, x140; T(int); };
T::T(int a) { x13C = a; x130 = 0; x138 = 0; x140 = 0; x124 = 0; x128 = 0; }
