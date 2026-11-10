struct T { float x0, x4, x8, xC, x10, x14, x18; };
struct V { float x0, x4, x8; };
extern "C" void func_001DBA60(T *);
extern "C" float func_001DBC38(T *t, V *v) { func_001DBA60(t); float a = 1.0f; float x = v->x4;
 if (x < t->x0) a -= t->x4; else if (x < 0.0f) a -= x * t->x4 / t->x0; else if (!(x <= t->x8)) { if (x < t->xC) a -= (x - t->x8) * t->x10 / (t->xC - t->x8); else a -= t->x10; }
 float b = 1.0f; float y = v->x8; if (y < t->x14) b += t->x18; else if (y < 0.0f) b += y * t->x18 / t->x14;
 return a * b; }

