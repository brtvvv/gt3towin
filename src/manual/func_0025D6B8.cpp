struct S { int h; char p[0x3C]; int a, b, c; };
extern "C" void func_00286EE0(int);
extern "C" void func_0025C420(S *, int, int, int, int);
extern "C" void func_0025D6B8(S *s, int a, int b, int c) { func_00286EE0(s->h); s->a = a; s->b = b; s->c = c; func_0025C420(s, 5, 1, 0, 0); }
