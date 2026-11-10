struct T { int x0, x4, x8, xC, x10; float x14, x18; };
struct S { char p[0x10]; float x10, x14, x18; char q[0x2C - 0x1C]; int x2C; };
struct U { char p[0x38]; float x38, x3C; };
extern "C" int func_001BD178(T *t, S *s, U *u) { if (t->x10 == -128) { float dx = u->x38 * s->x10 - u->x38, dy = u->x3C * s->x14 - u->x3C; if (dx == 0.0f && dy == 0.0f) { t->x8++; return s->x2C; } if (s->x18 == 0.0f) { t->x8++; return s->x2C; } t->x14 = dx / (int)(s->x18 * 50.0f); t->x18 = dy / (int)(s->x18 * 50.0f); t->x10 = (int)(s->x18 * 50.0f); }
 if (--t->x10 < 0) { t->x10 = -128; t->x8++; } else { u->x38 += t->x14; u->x3C += t->x18; } return s->x2C; }

