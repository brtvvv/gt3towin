struct T { T(void *); char p[0x1E4]; };
extern "C" int func_0016E208(void *);
extern "C" T *func_0016E190(void *a) { if (!func_0016E208(a)) return 0; return new T(a); }
