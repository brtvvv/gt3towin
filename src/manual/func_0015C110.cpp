struct S { int x0; float x4, x8; };
extern "C" float func_0015C110(S *s, float x) { float v = x * s->x4 * 60.0f + s->x8; int n = s->x0; int q = (int)(v / n); return v - q * n; }

