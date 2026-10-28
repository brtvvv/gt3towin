struct P8 { char c[8]; };
struct S { int h; char p[0x4C]; P8 v; };
extern "C" void func_00286EE0(int);
extern "C" void func_0025C420(S *, int, int, int, int);
extern "C" void func_0025CF30(S *s, P8 *v) { func_00286EE0(s->h); s->v = *v; func_0025C420(s, 2, 1, 0, 0); }

