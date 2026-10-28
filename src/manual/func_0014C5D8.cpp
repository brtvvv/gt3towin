struct X { char p[0x18]; long k; };
struct T { T(); ~T(); char *get(long); char p[0x30]; };
extern "C" X *func_0014CAF8(int);
extern "C" void func_0027FDBC(char *, char *);
extern "C" void func_0014C5D8(int a, char *buf) { X *x = func_0014CAF8(a); if (!x) return; T t; func_0027FDBC(buf, t.get(x->k)); }
