struct N { N *next; }; struct P { char p[0x18]; N *free; }; extern "C" N *func_00146D00(P *p) { N *n = p->free; if (!n) return 0; p->free = n->next; return n; }
