struct S { int n; float k; float o; };
extern "C" float func_0015C110(S *s, float x) { float v = x * s->k * 60.0f + s->o; int q = (int)(v / s->n); return v - q * s->n; }

