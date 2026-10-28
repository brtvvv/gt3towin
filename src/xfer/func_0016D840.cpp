struct T { T(void *); char p[0x24C]; };
extern "C" int func_0016D8B8(void *);
extern "C" T *func_0016D840(void *a) { if (!func_0016D8B8(a)) return 0; return new T(a); }
