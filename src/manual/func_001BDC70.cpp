struct T { int x0, x4, x8, xC, x10; };
struct S { char p[0x10]; float x10, x14; char q[0x2C - 0x18]; int x2C; };
struct U { char p[0xA4]; float xA4; };
extern float D_003519E0;
extern "C" int func_001BDC70(T *t, S *s, U *u) { if (t->x10 == -128) t->x10 = (int)(s->x14 * 50.0f); if (--t->x10 < 0) { t->x10 = -128; t->x8++; } else { float v = u->xA4 + s->x10 * D_003519E0; float hi = 1.0f, lo = 0.0f; if (v < lo) v = lo; if (hi < v) v = hi; u->xA4 = v; } return s->x2C; }

