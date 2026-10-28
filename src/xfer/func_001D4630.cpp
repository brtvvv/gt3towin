struct T { T(void *); char p[0x204]; };
extern "C" int func_001D46A8(void *);
extern "C" T *func_001D4630(void *a) { if (!func_001D46A8(a)) return 0; return new T(a); }
