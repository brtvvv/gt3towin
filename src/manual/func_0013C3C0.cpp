struct L { float x0, x1, s, c; };
extern "C" void func_0013C330(float *, int, float *, float *), func_00256BB8(float, float *, float *);
extern "C" void func_0013C3C0(float *a, int b, float *o1, float *o2) { L l; func_0013C330(a, b, &l.x0, &l.x1); func_00256BB8(a[0], &l.s, &l.c); *o1 = l.x0 * l.c + l.x1 * l.s; *o2 = -l.x0 * l.s + l.x1 * l.c; }
