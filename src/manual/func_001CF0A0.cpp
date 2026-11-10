struct T { char p[0x104]; float x104, x108; };
extern "C" float func_0026F500(int, float, float);
extern "C" void func_001CF0A0(T *t, int n) { float m = 488.0f; float r = func_0026F500(1, t->x104, m); t->x108 = (float)(-n) * m + r; }

