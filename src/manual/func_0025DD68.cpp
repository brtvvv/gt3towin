struct S { int h; char p[0x3C]; int x; };
extern "C" void func_00286EE0(int);
extern "C" void func_0025C420(S *, int, int, int, int);
extern "C" void func_0025DD68(S *s, int x) { func_00286EE0(s->h); s->x = x; func_0025C420(s, 3, 1, 0, 0); }

