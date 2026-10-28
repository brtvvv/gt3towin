struct T { char p[8]; char **e; };
struct S { char p[0x18]; T *t; };
extern "C" void func_001790F0(char *, int, int), func_0017C2C0(char *, char *, int);
extern "C" void func_0017B8F0(S *s, int i, int a, int b) { char *x = s->t->e[i]; func_001790F0(x, a, b); func_0017C2C0(x + 0x11DC, (char *)s + 0x8AC, a); }

