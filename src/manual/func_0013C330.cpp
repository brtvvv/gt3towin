struct T { char p[0x1C]; float x1C; char q[8]; signed char x28; };
extern "C" void func_00256BB8(float *, float *, float);
extern "C" void func_0013C330(T *t, int a, float *x, float *y) { float st[2]; func_00256BB8(st, &st[1], a * 360.0f / t->x28); *x = t->x1C * st[1]; *y = t->x1C * st[0]; }

