struct T { char p[0x10]; int x10, x14; };
extern float D_00352408;
extern "C" void func_00257CA0(float); extern "C" void func_00248BA8(T *, int, float, float, float, float);
extern "C" void func_00248FF8(T *t, float *v, float a, float b) { float x = (v[0] * 0.5f + 0.5f) * t->x10; float y = (0.5f - v[1] * 0.5f) * t->x14; float z = v[2] - D_00352408; if (z < 0.0f) z = 0.0f; func_00257CA0(z); if (b < 2.0f) b = 2.0f; int n = (int)b; func_00248BA8(t, 0, x, y, b, a / (n * n)); }

