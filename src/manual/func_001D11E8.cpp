struct N { char p[0x28]; float x; char q[0x9C - 0x28 - 4]; N *parent; };
extern "C" float func_001D11E8(N *n) { N *p = n->parent; if (p) return func_001D11E8(p) + n->x; return n->x; }

