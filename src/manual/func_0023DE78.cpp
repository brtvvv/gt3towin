struct T { char p[0x25C]; float x25C, x260, x264, x268; char q[8]; float x274, x278; };
extern "C" void func_0023DE40(T *, float, float);
extern "C" void func_0023DE78(T *t, float x, float y) { t->x278 = y; t->x274 = x; func_0023DE40(t, x * t->x264 * t->x25C, y * t->x268 * t->x260 * 512.0f / 448.0f); }

