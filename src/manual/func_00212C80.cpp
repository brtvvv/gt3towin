struct T { int a[12]; };
extern "C" int func_00212C18(T *, int);
extern "C" int func_00212C80(T *t, int v) { int p = func_00212C18(t, v); if (p >= 0) { int i, j; for (i = 11; p < i; i = j) { j = i - 1; t->a[i] = t->a[j]; } t->a[p] = v; return p; } return -1; }

