struct R { float x0, x4, x8; };
struct T { char p[0x180]; R *x180; int x184; float x188; };
extern "C" int func_00205328(T *, int, int, int); extern "C" float func_00205B60(T *, int, int);
extern "C" int func_00205BB8(T *t, int a, int b, int c) { int r = func_00205328(t, a, b, c); if (t->x180) { float v = func_00205B60(t, a, c); R *q = t->x180; t->x188 = (v - q->x4) / (q->x8 - q->x4); } return r; }

