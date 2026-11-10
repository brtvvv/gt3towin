struct T { int x0, x4, x8, xC, x10; };
struct S { char p[0x10]; float x10, x14, x18, x1C, x20; char q[0x2C - 0x24]; int x2C; };
struct U { char p[0x8C]; float a, b, c, d; };
extern float D_003519E8;
extern "C" int func_001BDE38(T *t, S *s, U *u) { if (t->x10 == -128) t->x10 = (int)(s->x20 * 50.0f); if (--t->x10 < 0) { t->x10 = -128; t->x8++; return s->x2C; } int r = s->x2C; float k = D_003519E8; for (int i = 3; i >= 0; i--) { u->a += s->x10 * k; u->b += s->x14 * k; u->c += s->x18 * k; u->d += s->x1C * k; } return r; }

