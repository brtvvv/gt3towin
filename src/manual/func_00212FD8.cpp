struct E { char c[32]; };
struct S { char p[0x180]; E e[12]; };
extern "C" void func_00212FD8(S *s, E *v, int idx) { for (int i = 11; idx < i; i--) s->e[i] = s->e[i - 1]; s->e[idx] = *v; }
