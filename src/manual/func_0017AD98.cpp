struct L { int x0; int x4; int *x8; };
struct T { char p[0x18]; L *x18; };
extern "C" void func_00177DD0(int);
extern "C" void func_0017AD98(T *t, int i) { L *l = t->x18; int n = l->x0; if (i >= n) return; if (i >= 0) { func_00177DD0(l->x8[i]); return; } for (int j = 0; j < n; j++) func_00177DD0(t->x18->x8[j]); }

