struct T { T(void *, void *); char p[0x10C]; };
extern "C" T *func_00103010(int a, void *b, int c, void *d) { return new T(d, b); }
