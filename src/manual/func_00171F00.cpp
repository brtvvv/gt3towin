struct S { char p[0x330]; float f[(0x518 - 0x330) / 4]; int n; };
extern "C" float func_00136910(S *, int);
extern "C" float func_00171F00(S *s, int i) { if (i != s->n - 1) return s->f[i + 1]; return func_00136910(s, i); }

