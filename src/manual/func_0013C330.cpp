struct S { char p[0x1C]; float r; char q[8]; signed char n; };
extern "C" void func_00256BB8(float, float *, float *);
extern "C" void func_0013C330(S *s, int a, float *o1, float *o2) { float sc[2]; func_00256BB8((float)a * 360.0f / (float)s->n, &sc[0], &sc[1]); *o1 = s->r * sc[1]; *o2 = s->r * sc[0]; }
