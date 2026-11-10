struct V { float x, y, z; };
struct W { int a, b; };
extern "C" void func_00222800(void *); extern "C" void func_002225E8(void *, V *, V *, W *, int *);
extern "C" void func_00222508(void *t, V *a, V *b, W *c, int *d, int n) { func_00222800(t); for (int i = 0; i < n; i++) func_002225E8(t, a ? &a[i] : 0, b ? &b[i] : 0, c ? &c[i] : 0, d ? &d[i] : 0); func_00222800(t); }

