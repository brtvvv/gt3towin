struct V { float a, b, c, d; };
struct T { int x0, x4, x8, xC, x10; };
struct S { int x0, x4; char p[8]; float x10, x14, x18, x1C, x20; char q[0x2C - 0x24]; int x2C; };
struct U { char p[0x40]; V v[1]; };
extern float D_003519D8;
extern "C" int func_001BD688(T *t, S *s, U *u) { if (t->x10 == -128) t->x10 = (int)(s->x20 * 50.0f); if (--t->x10 < 0) { t->x10 = -128; t->x8++; } else { float lo = 0.0f, hi = 1.0f; V *v = (V *)((char *)(s->x4 * 16 + (int)u) + 0x40);
 float f = v->a + s->x10 * D_003519D8; if (f < lo) f = lo; if (hi < f) f = hi; v->a = f;
 float g = v->b; g += s->x14 * D_003519D8; if (g < lo) g = lo; if (hi < g) g = hi; v->b = g;
 float h = v->c; h += s->x18 * D_003519D8; if (h < lo) h = lo; if (hi < h) h = hi; v->c = h;
 float m = v->d; m += s->x1C * D_003519D8; if (m < lo) m = lo; if (hi < m) m = hi; v->d = m; } return s->x2C; }

