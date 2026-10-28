struct T { T(void *, void *); char p[0x120]; };
extern "C" T *func_0011CAB0(int a, void *b, int c, void *d) { return new T(d, b); }
