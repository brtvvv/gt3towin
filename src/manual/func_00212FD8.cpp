struct E { char d[0x20]; };
struct T { char p[0x180]; E e[12]; };
extern "C" void func_00212FD8(T *t, E *v, int k) { for (int i = 11; k < i; i--) t->e[i] = t->e[i - 1]; t->e[k] = *v; }

