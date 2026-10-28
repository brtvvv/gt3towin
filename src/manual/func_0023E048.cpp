struct S { char p[0x264]; float a, b, c, d; };
extern "C" void func_0023DFB8(S *, float, float);
extern "C" void func_0023E048(S *s, float x, float y) { func_0023DFB8(s, (x + s->c) * s->a, (y + s->d) * s->b * 512.0f / 448.0f); }

