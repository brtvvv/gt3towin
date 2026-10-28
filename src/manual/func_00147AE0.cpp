struct T { T(void *); char p[0x238]; };
extern "C" T *func_00147AE0(void *s) { return new T(s); }

