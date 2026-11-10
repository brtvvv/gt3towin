struct Q { int x0, x4, x8, xC; };
struct R { int x0, x4, x8, xC, x10, x14, x18, x1C; };
extern "C" int func_001C3670(int); extern "C" void func_001D90E8(void *, R *);
extern "C" void func_001D8D98(void *o, int f, Q *q, int a3, int t0, int t1, int t2) { int c = q->xC; if (f) { int v = func_001C3670(q->x4); if (v) c = v; } R r; r.xC = c; r.x10 = a3; r.x14 = t0; r.x18 = t1; r.x1C = t2; r.x0 = q->x0; r.x4 = q->x4; r.x8 = q->x8; func_001D90E8(o, &r); }

