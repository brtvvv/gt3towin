struct E { char p[0x14]; float x14; char q[0x28 - 0x18]; };
struct L { int n; E e[1]; };
struct T { char p[8]; L *l[1]; };
extern "C" int func_001FAE50(T *t, int i, int k, int *o1, int *o2, float x) { L *l = t->l[i]; E *a = l->e; int n = l->n;
 if (x < a[0].x14) { *o2 = n - 1; *o1 = 0; return 1; }
 if (a[n - 1].x14 <= x) { *o2 = n - 1; *o1 = 0; return 2; }
 for (int j = 0; j <= n; j++) { k += (j & 1) ? j : -j; int m = k; if (m < 0) m += n; else if (m >= n) m -= n; if (m == 0) continue; int p = m - 1; if (p < 0) p += n; if (a[p].x14 <= x && x < a[m].x14) { *o2 = p; *o1 = m; return 3; } }
 return 0; }

