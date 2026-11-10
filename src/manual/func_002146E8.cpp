struct R { int d[8]; };
struct T { int a[12]; char s[12][16]; int b[12]; R e[12]; };
extern "C" void func_0027FDBC(char *, char *); extern "C" void func_00214160(T *, int);
extern "C" void func_002146E8(T *t, int k) { for (; k < 11; k++) { t->a[k] = t->a[k + 1]; func_0027FDBC(t->s[k], t->s[k + 1]); t->b[k] = t->b[k + 1]; t->e[k] = t->e[k + 1]; } func_00214160(t, 11); }

