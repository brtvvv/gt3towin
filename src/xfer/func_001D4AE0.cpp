struct T { T(void *); char p[0x1E4]; };
extern "C" int func_001D4B58(void *);
extern "C" T *func_001D4AE0(void *a) { if (!func_001D4B58(a)) return 0; return new T(a); }
