struct T { T(void *); char p[0x21C]; };
extern "C" int func_001D3FA0(void *);
extern "C" T *func_001D3F28(void *a) { if (!func_001D3FA0(a)) return 0; return new T(a); }
