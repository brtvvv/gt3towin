struct E { char p[0x10]; short x10; char q[0x28 - 0x12]; };
struct L { int n; E e[1]; };
struct M { char p[8]; L *l[1]; };
struct T { int x0; M *x4; };
extern "C" int func_001FAB40(T *, int); extern "C" float func_001F9E10(int, float, float, float, int *, int *);
extern "C" int func_001FA130(T *t, int *ok, float *ov, float x, float y) { int i = func_001FAB40(t, 6); if (i == -1) return 0; L *l = t->x4->l[i]; E *a = l->e; for (int j = l->n - 1; j >= 0; j--) { int r[2]; r[0] = ((E *)(j * 0x28 + (int)a))->x10; float v = func_001F9E10(t->x0, x, y, 100.0f, &r[0], &r[1]); if (!r[1]) { *ov = v; *ok = r[0]; return 1; } } return 0; }

