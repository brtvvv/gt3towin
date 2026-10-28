struct T { T(void *); char p[0x1F8]; };
extern "C" int func_0016C5E0(void *);
extern "C" T *func_0016C568(void *a) { if (!func_0016C5E0(a)) return 0; return new T(a); }
