struct T { char p[0x118]; int n; };
extern "C" int func_0012B9E0(T *, int); extern "C" int func_0012B768(T *, int);
extern "C" int func_0012BC20(T *t, int k) { int i; int a = func_0012B9E0(t, k);
 for (i = 0; i < t->n; i++) { if (func_0012B768(t, i) == 10) continue; if (i == k) continue; int b = func_0012B9E0(t, i); if (a == b) return 1; if (a == 1 && (unsigned)(b - 5) < 2) return 1; if (a == 2 && (unsigned)(b - 9) < 2) return 1; if ((unsigned)(a - 5) < 2 && b == 1) return 1; if ((unsigned)(a - 9) < 2 && b == 2) return 1; } return 0; }

