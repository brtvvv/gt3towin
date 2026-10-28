struct X { char p[0x10]; long k; };
struct T { T(); ~T(); char *get(long); char p[0x30]; };
extern "C" X *func_0014CB98(int);
extern "C" void func_0027FDBC(char *, char *);
extern "C" void func_0014C7A0(int a, char *buf) { X *x = func_0014CB98(a); if (!x) return; T t; func_0027FDBC(buf, t.get(x->k)); }
