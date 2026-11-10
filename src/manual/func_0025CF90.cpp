struct T { int x0; };
extern "C" void func_00286EE0(int); extern "C" void func_0025C420(T *, int, int, int *, int);
extern "C" int func_0025CF90(T *t) { char raw[0x80]; int *p = (int *)((int)(raw + 0x3F) & -64); func_00286EE0(t->x0); func_0025C420(t, 0, 0, p, 0x40); return *p; }

