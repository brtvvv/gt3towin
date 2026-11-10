extern "C" void func_00286EE0(int);
struct T { int x0; char p[0x3C]; int x40; };
extern "C" void func_0025C420(T *, int, int, int, int);
extern "C" void func_0025E990(T *t, int a) { func_00286EE0(t->x0); t->x40 = a; func_0025C420(t, 1, 0, 0, 0); }

