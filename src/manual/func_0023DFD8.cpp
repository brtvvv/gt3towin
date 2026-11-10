struct T { char p[0x264]; float x264, x268, x26C, x270; };
extern "C" void func_0023DFB8(T *, float, float);
extern "C" void func_0023DFD8(T *t, int a, int b) { func_0023DFB8(t, ((float)a + t->x26C) * t->x264, ((float)b + t->x270) * t->x268 * 512.0f / 448.0f); }

