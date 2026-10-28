struct S { char p[0x104]; float f; };
extern "C" int func_0027C1D8(float), func_0027ABE0(int, int);
extern "C" void func_0013A398(S *s, float x) { s->f = x; if (func_0027ABE0(func_0027C1D8(x), 0) < 0) { s->f = 0; return; } if (1.0f < s->f) s->f = 1.0f; }

