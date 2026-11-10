struct E { int d[10]; };
struct T { E e[1][2]; };
extern "C" void func_002188B8(T *t, int a, int b, int c, int v) { t->e[a][b].d[c] = v; }

