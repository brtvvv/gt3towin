struct S { int sem; char p[0x3C]; int a, b, c; char name[0x20]; };
extern "C" void func_00286EE0(int), func_0027FDBC(char *, char *), func_0025C420(S *, int, int, int, int);
extern "C" void func_0025E368(S *s, int a, int b, int c, char *n) { func_00286EE0(s->sem); s->a = a; s->b = b; s->c = c; s->name[0] = 0; if (n) func_0027FDBC(s->name, n); func_0025C420(s, 1, 0, 0, 0); }
