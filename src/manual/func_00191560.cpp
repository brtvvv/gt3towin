struct S { int x0, x4; float x8; };
struct W { unsigned a : 4; unsigned b : 14; unsigned c : 14; };
static inline int clamp(int v, int hi) { return v < 0 ? 0 : (v > hi ? hi : v); }
extern "C" W func_00191560(S *s, W w) { w.a = clamp(s->x0, 15); w.b = clamp((int)(s->x8 * 10.0f), 9999); return w; }

