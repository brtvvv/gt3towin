struct T { T(void *, void *); char p[0x120]; };
extern "C" T *func_00110078(int a, void *b, int c, void *d) { return new T(d, b); }
