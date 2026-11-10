struct V { float x, y; int z; };
struct Q { V v[4]; };
struct O { char p[0x14]; int x14; };
struct T { char p[0x9C]; O *o; int xA0; };
extern "C" float func_001D11E8(O *); extern "C" float func_001D1228(O *); extern "C" void func_001D1268(O *, float *, float *);
extern "C" void func_001D0F38(T *t, Q *q, float x, float y, float w, float h) { float off[2]; off[1] = off[0] = 0.0f; O *o = t->o; if (o && o->x14 != 3) { switch (t->xA0 & 3) { case 1: off[0] = func_001D11E8(o); break; case 2: off[1] = func_001D1228(o); break; case 3: func_001D1268(o, &off[0], &off[1]); break; } }
 float hw = w * 0.5f, hh = h * 0.5f; float x1 = x - hw + off[0], y1 = y - hh + off[1], x2 = x + hw + off[0] + 0.5f, y2 = y + hh + off[1] + 0.5f;
 q->v[3].z = 0; q->v[0].z = 0; q->v[1].z = 0; q->v[2].z = 0; q->v[0].x = x1; q->v[0].y = y1; q->v[1].x = x2; q->v[2].y = y2; q->v[2].x = x1; q->v[3].y = y2; q->v[1].y = y1; q->v[3].x = x2; }

