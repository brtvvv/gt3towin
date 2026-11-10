struct L8 { char c[8]; };
struct T { int x0; char p[0x4C]; L8 x50; };
extern "C" void func_00286EE0(int); extern "C" void func_0025C420(T *, int, int, int, int);
extern "C" void func_0025CF30(T *t, L8 *s) { func_00286EE0(t->x0); t->x50 = *s; func_0025C420(t, 2, 1, 0, 0); }

