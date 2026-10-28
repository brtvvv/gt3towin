struct T { T(void *); char p[0x248]; };
extern "C" int func_001D4450(void *);
extern "C" T *func_001D43D8(void *a) { if (!func_001D4450(a)) return 0; return new T(a); }
