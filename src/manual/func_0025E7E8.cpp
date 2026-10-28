struct S { int h; char p[0x3C]; int x; };
extern S D_004A8EE0[];
extern "C" void func_00286EE0(int);
extern "C" void func_0025C420(S *, int, int, int, int);
extern "C" void func_0025E7E8(int x) { S *s = D_004A8EE0; func_00286EE0(s->h); s->x = x; func_0025C420(s, 1, 0, 0, 0); }

