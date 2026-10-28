struct S { char p[0x104]; float a; float b; };
extern "C" float func_0026F500(int, float, float);
extern "C" void func_001CF038(S *s, int n) { float k = 680.0f; float r = func_0026F500(1, s->a, k); s->a = (float)(-n) * k + r; }

