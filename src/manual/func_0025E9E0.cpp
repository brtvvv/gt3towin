struct S { int sem; char p[0x3C]; int a, b, c; };
extern "C" void func_00286EE0(int), func_0025C420(S *, int, int, int, int);
extern "C" void func_0025E9E0(S *s, int k, int a, int b, int c) { func_00286EE0(s->sem); s->a = a; s->b = b; s->c = c; func_0025C420(s, k, 0, 0, 0); }
