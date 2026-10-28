struct T { T(void *); char p[0x248]; };
extern "C" int func_001D41F8(void *);
extern "C" T *func_001D4180(void *a) { if (!func_001D41F8(a)) return 0; return new T(a); }
