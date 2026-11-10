struct C { int v, mn, mx, xC, x10; };
extern "C" int func_001CD8A8(C *c, int d) { int old = c->v; c->v += d; if (!c->xC) { if (c->v < c->mn || c->v >= c->mx) c->x10 = 1; else c->x10 = 0; while (c->v < c->mn) c->v += c->mx - c->mn; while (c->v >= c->mx) c->v -= c->mx - c->mn; } else { if (c->v < c->mn) c->v = c->mn; if (c->v >= c->mx) c->v = c->mx - 1; } return old != c->v; }

