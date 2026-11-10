struct T { char p[0xAC]; char xAC[0xC]; float xB8; };
extern "C" void func_001EDFA0(T *, int, int, int *, float *); extern "C" void func_001EDBE8(char *, int, int, float, int);
extern "C" void func_001EDC78(T *t, int a, int b) { if (t->xB8 == 0.0f) return; int st[2]; func_001EDFA0(t, a, b, &st[0], (float *)&st[1]); func_001EDBE8(t->xAC, a, b, *(float *)&st[1], st[0]); func_001EDBE8(t->xAC, b, a, -*(float *)&st[1], -st[0]); }

