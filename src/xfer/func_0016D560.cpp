struct T { T(void *); char p[0x1EC]; };
extern "C" int func_0016D5D8(void *);
extern "C" T *func_0016D560(void *a) { if (!func_0016D5D8(a)) return 0; return new T(a); }
