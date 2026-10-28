struct S { int h; char p[0x3C]; char *a; int b; };
extern S D_004A8D60[];
extern "C" void func_00286EE0(int), func_002876F0(char *, char *);
extern "C" void func_0025C420(S *, int, int, int, int);
extern "C" void func_0025E070(char *p, int n) { S *s = D_004A8D60; func_00286EE0(s->h); s->a = p; s->b = n; func_002876F0(p, p + n); func_0025C420(s, 2, 0, 0, 0); }
