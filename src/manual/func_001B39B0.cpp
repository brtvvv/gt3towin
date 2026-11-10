struct C { int v, x4, x8, xC, x10, x14, mn, mx; };
extern "C" int func_001B39B0(C *c, int d) { int old = c->v; c->v += d; if (!c->xC) { if (c->v < c->mn || c->v >= c->mx) c->x10 = 1; else c->x10 = 0; while (c->v < c->mn) c->v += c->mx - c->mn; while (c->v >= c->mx) c->v -= c->mx - c->mn; } else { if (c->v < c->mn) c->v = c->mn; if (c->v >= c->mx) c->v = c->mx - 1; } return old != c->v; }

