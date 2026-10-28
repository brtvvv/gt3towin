struct T { T(void *); char p[0x1F8]; };
extern "C" int func_00171550(void *);
extern "C" T *func_001714D8(void *a) { if (!func_00171550(a)) return 0; return new T(a); }
