struct S { char p[8]; float a[1]; };
extern "C" void func_0013C330(S *, int, float *, float *);
extern "C" void func_00258FD4(float, float, float);
extern "C" void func_002590C0(float);
extern "C" void func_0013C468(S *s, int i) { float v[2]; func_0013C330(s, i, &v[0], &v[1]); func_00258FD4(v[0], 0.0f, v[1]); func_002590C0(s->a[i]); }

