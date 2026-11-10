extern "C" void func_0013C330(float *, int, float *, float *); extern "C" void func_00256BB8(float, float *, float *);
extern "C" void func_0013C3C0(float *a, int b, float *o1, float *o2) { float st[4]; func_0013C330(a, b, &st[0], &st[1]); func_00256BB8(*a, &st[2], &st[3]); *o1 = st[0] * st[3] + st[1] * st[2]; *o2 = -st[0] * st[2] + st[1] * st[3]; }

