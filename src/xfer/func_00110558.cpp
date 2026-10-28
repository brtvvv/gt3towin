struct T { T(void *, void *); char p[0x128]; };
extern "C" T *func_00110558(int a, void *b, int c, void *d) { return new T(d, b); }
