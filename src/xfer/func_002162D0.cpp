struct E { char c[32]; };
struct S { char p[0x94]; E e[12]; };
extern "C" void func_002162D0(S *s, E *v, int idx) { for (int i = 5; idx < i; i--) s->e[i] = s->e[i - 1]; s->e[idx] = *v; }
