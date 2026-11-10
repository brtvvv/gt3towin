struct S { char p[0x10]; float x10, x14, x18, x1C; char q[0xC]; int x2C; };
struct T { int x0, x4, x8, xC; int x10; float x14, x18, x1C; };
extern "C" void func_001D29C8(char *, float, float);
extern "C" int func_001BD3B0(T *t, S *s, char *o) { int c = t->x10; if (c == -0x80) { t->x14 = s->x10; t->x18 = s->x14; t->x1C = s->x18; c = (int)(s->x1C * 50.0f); t->x10 = c; } c--; t->x10 = c; if (c < 0) { t->x10 = -0x80; t->x8++; } else { func_001D29C8(o + 0x20, t->x14, t->x1C); func_001D29C8(o + 0x2C, t->x18, t->x1C); } return s->x2C; }

