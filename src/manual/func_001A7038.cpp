// @__1T 0x1A7038
extern "C" void *func_0027ED70(void *, int, int);
struct Bs { Bs(int); ~Bs(); char p[0x18]; };
struct T : Bs { char m[0x10]; int x; T(); };
T::T() : Bs(0) { func_0027ED70(m, 0, 0x10); x = 0; }
