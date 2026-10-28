struct S { char p[0x25C]; float a, b, c, d; char q[8]; float x, y; };
extern "C" void func_0023DE40(S *, float, float);
extern "C" void func_0023DE78(S *s, float x, float y) { s->y = y; s->x = x; func_0023DE40(s, x * s->c * s->a, y * s->d * s->b * 512.0f / 448.0f); }

