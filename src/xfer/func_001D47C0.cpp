struct T { T(void *); char p[0x248]; };
extern "C" int func_001D4838(void *);
extern "C" T *func_001D47C0(void *a) { if (!func_001D4838(a)) return 0; return new T(a); }
