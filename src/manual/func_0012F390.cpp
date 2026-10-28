struct Bk { char c[32]; };
struct T { char p[8]; char **e; };
struct S { char p[0x18]; T *t; };
extern "C" int func_0012F390(char *a, S *s, int i) { char *x = s->t->e[i]; char *y = *(char **)(x + 0x18); *(Bk *)(a + 0x204) = *(Bk *)(y + 0x137C); return *(int *)(y + 0x137C) - *(int *)(x + 0x2104); }

