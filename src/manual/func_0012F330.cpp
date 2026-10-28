struct Bk { char c[32]; };
struct T { char p[8]; char **e; };
struct S { char p[0x18]; T *t; };
extern "C" void func_0012F330(char *a, S *s, int i) { char *d = s->t->e[i]; *(Bk *)(d + 0x2104) = *(Bk *)(a + 0x204); }

