struct T { T(void *); char p[0x25C]; };
extern "C" int func_0016B118(void *);
extern "C" T *func_0016B0A0(void *a) { if (!func_0016B118(a)) return 0; return new T(a); }
