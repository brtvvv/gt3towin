struct G { int x0; char p[0x3C]; int x40, x44, x48; char q[8]; char x54[0x40]; };
extern "C" void func_00286EE0(int); extern "C" void func_0025C420(G *, int, int, int *, int); extern "C" void func_0027FDBC(char *, char *);
extern "C" int func_0025E4D8(G *g, int mode, int a, int b, int c, char *s) { int *buf = (int *)(((int)__builtin_alloca(0x7F) + 0x3F) & -64); func_00286EE0(g->x0); g->x40 = a; g->x44 = b; g->x48 = c; g->x54[0] = 0; if (s) func_0027FDBC(g->x54, s); func_0025C420(g, mode, 0, buf, 0x40); return buf[0]; }

