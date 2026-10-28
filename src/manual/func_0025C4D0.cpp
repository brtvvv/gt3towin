struct S { int h; };
extern "C" void func_00286EE0(int);
extern "C" void func_0025C420(S *, int, int, int, int);
extern "C" void func_0025C4D0(S *s, int a, int b) { func_00286EE0(s->h); func_0025C420(s, a, b, 0, 0); }

