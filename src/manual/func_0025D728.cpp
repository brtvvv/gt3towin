struct S { int d[0xD3]; int x34C; };
struct T { int x0; char p[0x3C]; S s; };
extern char D_002FE040[];
extern "C" void func_00286EE0(int); extern "C" int func_0026AD38(); extern "C" void func_0025C420(T *, int, int, char *, int);
extern "C" void func_0025D728(T *t, S *s) { func_00286EE0(t->x0); int r = func_0026AD38(); t->s = *s; s->x34C = 0; if (r) __asm__ volatile("ei"); func_0025C420(t, 4, 1, D_002FE040, 0x40); }

