struct T { T(void *); char p[0x258]; };
extern "C" int func_0016CFD8(void *);
extern "C" T *func_0016CF60(void *a) { if (!func_0016CFD8(a)) return 0; return new T(a); }
