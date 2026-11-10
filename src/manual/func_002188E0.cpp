struct E { int d[10]; };
struct T { E e[1][2]; };
extern "C" int func_002188E0(T *t, int a, int b, int c) { return t->e[a][b].d[c]; }

