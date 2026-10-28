// @__1UPc 0x238950
struct A { char p[0x1D0]; };
struct Bs { char p[0xC]; void set(char *); };
struct T2 : A, Bs { T2(); ~T2(); virtual void w(); };
struct M { M(); int a; };
struct P { char q[0x14]; };
struct U : T2, P, M { void init(); U(char *); };
U::U(char *x) { init(); set(x); }
