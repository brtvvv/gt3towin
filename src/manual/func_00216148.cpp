struct E { char d[16]; };
struct T { char p[4]; E e[6]; };
extern "C" char *func_0027FDBC(char *, char *); extern "C" int func_0026ACA0(char *); extern "C" void func_00216248(T *, int);
extern "C" void func_00216148(T *t, char *s, int k) { for (int i = 5; k < i; i--) func_0027FDBC(t->e[i].d, t->e[i - 1].d); int n = func_0026ACA0(s); char *buf = (char *)__builtin_alloca(n); func_0027FDBC(buf, s); if (n >= 16) buf[15] = 0; func_0027FDBC(t->e[k].d, buf); func_00216248(t, k); }

