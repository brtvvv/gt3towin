struct T { T(void *); char p[0x248]; };
extern "C" int func_001D49C8(void *);
extern "C" T *func_001D4950(void *a) { if (!func_001D49C8(a)) return 0; return new T(a); }
