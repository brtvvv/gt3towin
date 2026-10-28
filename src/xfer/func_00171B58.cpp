struct T { T(void *); char p[0x1E8]; };
extern "C" int func_00171BD0(void *);
extern "C" T *func_00171B58(void *a) { if (!func_00171BD0(a)) return 0; return new T(a); }
