struct T { char p[8]; float x8[1]; };
extern "C" void func_0013C330(T *, int, float *, float *); extern "C" void func_00258FD4(float, float, float); extern "C" void func_002590C0(float);
extern "C" void func_0013C468(T *t, int i) { float v[2]; func_0013C330(t, i, &v[0], &v[1]); func_00258FD4(v[0], 0.0f, v[1]); func_002590C0(t->x8[i]); }

