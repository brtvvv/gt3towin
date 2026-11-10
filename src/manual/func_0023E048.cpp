struct T { char p[0x264]; float x264, x268, x26C, x270; };
extern "C" void func_0023DFB8(T *, float, float);
extern "C" void func_0023E048(T *t, float x, float y) { func_0023DFB8(t, (x + t->x26C) * t->x264, (y + t->x270) * t->x268 * 512.0f / 448.0f); }

