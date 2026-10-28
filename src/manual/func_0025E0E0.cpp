struct S { int h; char p[0x3C]; long a; long b; };
extern S D_004A8E20[];
extern "C" void func_00286EE0(int);
extern "C" void func_0025C420(S *, int, int, int, int);
extern "C" void func_0025E0E0(long a, long b) { S *s = D_004A8E20; func_00286EE0(s->h); s->a = a; s->b = b; func_0025C420(s, 3, 1, 0, 0); }

