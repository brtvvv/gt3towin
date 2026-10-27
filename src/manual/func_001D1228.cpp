struct N { char p[0x34]; float x; char q[0x9C - 0x34 - 4]; N *parent; };
extern "C" float func_001D1228(N *n) { N *p = n->parent; if (p) return func_001D1228(p) + n->x; return n->x; }

