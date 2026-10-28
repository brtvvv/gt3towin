struct T { T(void *); char p[0x230]; };
extern "C" int func_00170568(void *);
extern "C" T *func_001704F0(void *a) { if (!func_00170568(a)) return 0; return new T(a); }
