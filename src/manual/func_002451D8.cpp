struct L; struct N { L *x0; N *x4, *x8; char p[0x1C - 0xC]; int *x1C; int x20; };
struct L { N *x0, *x4; };
struct T { char p[0xA18]; N *xA18; };
extern "C" N *func_002451D8(T *t, int k) { if (!k) return 0; for (N *p = t->xA18; p; p = p->x4) { if (p->x20 == k) { if (p->x1C) *p->x1C = 0; L *l = p->x0; if (l) { if (p->x4) p->x4->x8 = p->x8; else l->x0 = p->x8; if (p->x8) p->x8->x4 = p->x4; else l->x4 = p->x4; p->x0 = 0; } return p; } } return 0; }

