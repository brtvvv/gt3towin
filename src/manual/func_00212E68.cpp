struct E { char d[16]; };
struct T { char p[0x30]; E e[12]; };
extern "C" char *func_0027FDBC(char *, char *); extern "C" int func_0026ACA0(char *); extern "C" void func_002130A8(T *, int);
extern "C" void func_00212E68(T *t, char *s, int k) { for (int i = 11; k < i; i--) func_0027FDBC(t->e[i].d, t->e[i - 1].d); int n = func_0026ACA0(s); char *buf = (char *)__builtin_alloca(n); func_0027FDBC(buf, s); if (n >= 16) buf[15] = 0; func_0027FDBC(t->e[k].d, buf); func_002130A8(t, k); }

