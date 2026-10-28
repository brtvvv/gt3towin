struct S { int a; int r[4]; int f[0x2A]; int h; };
extern "C" void func_00286EE0(int), func_00286EC0(int);
extern "C" int func_00268240(S *s, int i) { func_00286EE0(s->h); if (s->f[i]) s->f[i] = 0; int r = s->r[i]; func_00286EC0(s->h); return r; }

