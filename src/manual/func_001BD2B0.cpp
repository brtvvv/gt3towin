struct V { float x, y, z; float d(float t) { return t - z; } };
struct S { char p[8]; int x8; char q[4]; int x10; float x14, x18, x1C, x20; };
struct A { char p[0x10]; float x10, x14, x18, x1C, x20; char q[0x2C - 0x24]; int x2C; };
struct B { char p[0x20]; V a, b; };
extern "C" void func_001D2940(V *, float);
extern "C" int func_001BD2B0(S *s, A *a, B *b) { int t = s->x10; if (t == -0x80) { s->x14 = a->x10; s->x18 = a->x14; s->x1C = a->x18; s->x20 = a->x1C; t = (int)(a->x20 * 50.0f); s->x10 = t; } t--; s->x10 = t; if (t < 0) { s->x10 = -0x80; s->x8++; } else { b->a.x += b->a.d(s->x14) * s->x1C; func_001D2940(&b->a, s->x20); b->b.x += b->b.d(s->x18) * s->x1C; func_001D2940(&b->b, s->x20); } return a->x2C; }

