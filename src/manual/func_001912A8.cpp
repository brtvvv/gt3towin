struct B { unsigned a : 4; unsigned pad : 4; unsigned b : 10; unsigned c : 14; };
static inline int clamp(int x, int m) { int r; if (x >= 0) { r = x; if (m < x) r = m; } else r = 0; return r; }
extern "C" unsigned func_001912A8(int *p, B r) { r.a = clamp(p[0], 15); r.b = clamp(p[2], 999); return *(unsigned *)&r; }

