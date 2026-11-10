struct P { char p[0xE384]; int n; };
struct T { P *p; char q[0x80]; unsigned char a[8][8]; };
extern "C" int func_001EE558(P *, int, int, int *);
extern "C" unsigned func_001F6D00(T *t, int k, unsigned short f) { unsigned m = 0; int i; int n = t->p->n; int tmp;
 for (i = 0; i < n; i++) { if (i == k) continue; int a = t->a[k][i], b = t->a[i][k]; if (!a && !b) continue; if (!(f & 2)) { if (func_001EE558(t->p, k, i, &tmp)) continue; } if (f & 1) ; else { if (a == 1) a = 0; if (b == 1) b = 0; } if (!a && !b) continue; m |= 1 << i; } return m; }

