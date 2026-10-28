struct S { int h; char p[0x3C]; long a; long b; };
extern "C" void func_00286EE0(int);
extern "C" void func_0025C420(S *, int, int, int, int);
extern "C" void func_0025E298(S *s, long a, long b) { func_00286EE0(s->h); s->a = a; s->b = b; func_0025C420(s, 3, 1, 0, 0); }

