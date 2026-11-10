struct N { N *x0; };
struct T { int x0; N *x4; };
extern "C" int func_0019F6C8(N *, float, int); extern "C" void func_001A0570(T *, N *, N *);
extern "C" void func_001A0598(T *t, int a, float x) { N *prev = 0; N *n = t->x4; while (n) { N *nx = n->x0; if (!func_0019F6C8(n, x, a)) func_001A0570(t, n, prev); else prev = n; n = nx; } }

