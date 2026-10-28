struct T { T(void *); char p[0x1F4]; };
extern "C" int func_0016BDC0(void *);
extern "C" T *func_0016BD48(void *a) { if (!func_0016BDC0(a)) return 0; return new T(a); }
