struct T { T(void *); char p[0x204]; };
extern "C" int func_001D45E0(void *);
extern "C" T *func_001D4568(void *a) { if (!func_001D45E0(a)) return 0; return new T(a); }
