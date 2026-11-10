struct E { int a, b; float c; };
struct S { int x0, x4; float x8; E e[7]; };
struct Car { char p[0x13B8]; short n; };
struct O { char p[0x18]; Car *c; };
struct L { int n; int x4; O **o; };
struct R { char p[0x18]; L *l; char q[0x38 - 0x1C]; int x38; };
extern "C" int func_00190C60(int); extern "C" float func_00190930(int); extern "C" float func_001EC370(Car *, float);
extern "C" void func_00207E60(S *s, R *r) { int i; s->x8 = 1.0f; s->x0 = 0; s->x4 = 0; for (i = 0; i < 7; i++) { s->e[i].b = 0; s->e[i].c = 0; s->e[i].a = 0; } if (!r) return;
 int k = func_00190C60(r->x38); int n = r->l->n; s->x8 = func_00190930(r->x38); for (i = 0; i < n; i++) { Car *c = r->l->o[i]->c; int v = c->n; if (v > 0) v = (v - 1) % k; else v = 0; s->e[i].a = v; s->e[i].c = func_001EC370(c, 0.0f); } }

