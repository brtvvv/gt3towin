struct T { T(void *); char p[0x24C]; };
extern "C" int func_0016AD20(void *);
extern "C" T *func_0016ACA8(void *a) { if (!func_0016AD20(a)) return 0; return new T(a); }
