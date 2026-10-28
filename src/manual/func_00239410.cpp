// @__1T 0x239410
struct Bs { Bs(); ~Bs(); char p[0xC]; };
extern char D_002ED3B8[];
struct T : Bs { virtual void v(); void init(); void set(char *); T(); };
T::T() { init(); set(D_002ED3B8); }
