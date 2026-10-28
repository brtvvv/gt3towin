struct T { T(void *); char p[0x2E8]; };
extern "C" int func_0016A2B0(void *);
extern "C" T *func_0016A238(void *a) { if (!func_0016A2B0(a)) return 0; return new T(a); }
