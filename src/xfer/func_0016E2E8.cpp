struct T { T(void *); char p[0x5E4]; };
extern "C" int func_0016E360(void *);
extern "C" T *func_0016E2E8(void *a) { if (!func_0016E360(a)) return 0; return new T(a); }
