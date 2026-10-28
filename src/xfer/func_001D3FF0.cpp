struct T { T(void *); char p[0x204]; };
extern "C" int func_001D4068(void *);
extern "C" T *func_001D3FF0(void *a) { if (!func_001D4068(a)) return 0; return new T(a); }
