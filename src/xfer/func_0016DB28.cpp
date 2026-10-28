struct T { T(void *); char p[0x20C]; };
extern "C" int func_0016DBA0(void *);
extern "C" T *func_0016DB28(void *a) { if (!func_0016DBA0(a)) return 0; return new T(a); }
