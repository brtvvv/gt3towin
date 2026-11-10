struct T { int x0, x4, x8, xC, x10; };
struct S { char p[0x10]; float x10, x14, x18; char q[0x2C - 0x1C]; int x2C; };
struct U { char p[0x80]; float x80, x84; };
extern float D_003519E4;
extern "C" int func_001BDD30(T *t, S *s, U *u) { if (t->x10 == -128) t->x10 = (int)(s->x18 * 50.0f); if (--t->x10 < 0) { t->x10 = -128; t->x8++; } else { float hi = 1.0f, lo = 0.0f; float v = u->x80 + s->x10 * D_003519E4; if (v < lo) v = lo; if (hi < v) v = hi; u->x80 = v; v = u->x84 + s->x14 * D_003519E4; if (v < lo) v = lo; if (hi < v) v = hi; u->x80 = v; } return s->x2C; }

