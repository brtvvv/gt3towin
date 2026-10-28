// @__1T 0x232B30
struct A { char p[0x1D0]; };
struct Bs { Bs(); ~Bs(); char p[0xC]; void set(char *); };
extern char D_002ED3B8[];
struct T : A, Bs { virtual void v(); void init(); T(); };
T::T() { init(); set(D_002ED3B8); }
