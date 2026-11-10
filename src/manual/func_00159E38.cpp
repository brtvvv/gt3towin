struct P { int a, b; };
struct T { char p[0x3C]; int x3C; };
extern "C" int func_00240048(int); extern "C" long func_00151178(T *, int);
extern "C" long func_00159E38(T *t, int a) { if (func_00240048(t->x3C) != 2) { P p; p.a = 8; p.b = 0; return *(long *)&p; } return func_00151178(t, a); }

