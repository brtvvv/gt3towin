struct T { T(void *); char p[0x248]; };
extern "C" int func_001D42C0(void *);
extern "C" T *func_001D4248(void *a) { if (!func_001D42C0(a)) return 0; return new T(a); }
