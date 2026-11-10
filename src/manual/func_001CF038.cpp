struct T { char p[0x104]; float x104, x108; };
extern "C" float func_0026F500(int, float, float);
extern "C" void func_001CF038(T *t, int n) { float m = 680.0f; float r = func_0026F500(1, t->x104, m); t->x104 = (float)(-n) * m + r; }

