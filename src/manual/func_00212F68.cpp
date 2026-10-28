struct S { char p[0xF0]; long e[12]; };
extern "C" void func_00212F68(S *s, long v, int idx) { for (int i = 11; idx < i; i--) s->e[i] = s->e[i - 1]; s->e[idx] = v; }

