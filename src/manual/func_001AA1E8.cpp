struct V { virtual void f0(); virtual void f1(); virtual void f1b(); virtual float f2(); virtual float f3(); virtual float f4(); };
extern "C" int *func_002279D0(int, float, float, float); extern "C" void func_001AA2B0(int, int, int);
extern "C" void func_001AA1E8(int a, int b, V *v, int c) { float x = v->f2(); float y = v->f3(); float z = v->f4(); int k; if (!b) k = 0; else k = *func_002279D0(b, x, y, z); func_001AA2B0(a, k, c); }

