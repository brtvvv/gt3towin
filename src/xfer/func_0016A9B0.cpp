struct T { T(void *); char p[0x2E8]; };
extern "C" int func_0016AA28(void *);
extern "C" T *func_0016A9B0(void *a) { if (!func_0016AA28(a)) return 0; return new T(a); }
