struct T { int x0, x4, x8, xC, x10; };
struct S { char p[0x10]; float x10; char q[0x2C - 0x14]; int x2C; };
extern "C" int func_001BCC20(T *t, S *s) { if (t->x10 == -128) t->x10 = (int)(s->x10 * 50.0f); if (--t->x10 < 0) { t->x10 = -128; t->x8++; } return s->x2C; }

