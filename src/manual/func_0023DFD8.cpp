struct S { char p[0x264]; float a, b, c, d; };
extern "C" void func_0023DFB8(S *, float, float);
extern "C" void func_0023DFD8(S *s, int x, int y) { func_0023DFB8(s, ((float)x + s->c) * s->a, ((float)y + s->d) * s->b * 512.0f / 448.0f); }
