struct T { T(void *); char p[0x1E8]; };
extern "C" int func_0016B8E8(void *);
extern "C" T *func_0016B870(void *a) { if (!func_0016B8E8(a)) return 0; return new T(a); }
