struct R { int d[8]; };
struct T { int x0; char s[6][16]; int a[6]; int b[6]; R e[6]; };
extern "C" void func_0027FDBC(char *, char *);
extern "C" void func_002163B0(T *t, int k) { for (; k < 5; k++) { t->a[k] = t->a[k + 1]; func_0027FDBC(t->s[k], t->s[k + 1]); t->b[k] = t->b[k + 1]; t->e[k] = t->e[k + 1]; } t->b[5] = 0; t->s[5][0] = 0; t->a[5] = 0x157529FF; }

