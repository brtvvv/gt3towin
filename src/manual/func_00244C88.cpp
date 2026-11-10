struct N; struct L { N *x0, *x4; };
struct N { L *x0; N *x4, *x8; int pC, p10; int x14; };
struct T { char p[0xA0C]; L xA0C; char q[0xA28 - 0xA14]; int xA28; };
extern "C" void func_00244A68(T *); extern "C" N *func_002451D8(T *, int); extern "C" void func_00244AA8(T *);
extern "C" int func_00244C88(T *t, int k) { int lk = t->xA28; if (!lk) func_00244A68(t); N *n = func_002451D8(t, k); if (n) { L *l = &t->xA0C; n->x4 = 0; n->x8 = t->xA0C.x0; if (t->xA0C.x0) t->xA0C.x0->x4 = n; else l->x4 = n; l->x0 = n; n->x0 = l; } if (!lk) func_00244AA8(t); if (!n) return -1; return n->x14; }

