struct X { float x0, x4, x8; };
struct L { int n; int e[1]; };
extern "C" void func_00229E88(int, X *, int, int, int, int);
extern "C" void func_0022A308(L *l, X *x, int a, int b, int c, int d) { int n; int i = 0; for (; i < (n = l->n); i++) func_00229E88(l->e[i], x, a, b, c, d); if (n) x->x8 = (x->x8 - 1.0f) / n + 1.0f; }

