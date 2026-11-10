struct E { char d[0x20]; };
struct T { char p[0x94]; E e[6]; };
extern "C" void func_002162D0(T *t, E *v, int k) { for (int i = 5; k < i; i--) t->e[i] = t->e[i - 1]; t->e[k] = *v; }


