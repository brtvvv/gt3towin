struct R { float a, b; char p[0x18]; };
struct T { char p[0x18]; float len; char q[0x34 - 0x1C]; unsigned n; R *r; };
extern "C" R *func_001A5278(T *t, float x) { if (x < 0.0f) return 0; float l = t->len; if (x > l) x -= (int)(x / l) * l; float e = x + l; R *r = t->r; for (unsigned i = 0; i < t->n; i++, r++) { if (r->a <= x || x <= r->b || r->a <= e || e <= r->b) return r; } return 0; }

