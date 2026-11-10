struct L { char p[0x40]; int n1; int *e1; int n2; int *e2; };
struct X { char p[0x4C]; L *x4C; };
extern "C" int func_001C3BD0(X *, int, int, int); extern "C" int func_001C3CA0(X *, int, int, int); extern "C" void func_001C0428(int, int);
extern "C" int func_001C37B0(X *x, int a) { L *l = x->x4C; if (!l) return 0; for (int i = 0; i < l->n1; i++) { int o = func_001C3BD0(x, l->e1[i], a, 0); if (o) func_001C0428(o, a); } for (int i = 0; i < l->n2; i++) { int o = func_001C3CA0(x, l->e2[i], a, 0); if (o) func_001C0428(o, a); } return 1; }

