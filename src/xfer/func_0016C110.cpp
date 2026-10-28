struct T { T(void *); char p[0x204]; };
extern "C" int func_0016C188(void *);
extern "C" T *func_0016C110(void *a) { if (!func_0016C188(a)) return 0; return new T(a); }
