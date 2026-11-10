extern char D_0032FAC8[];
struct L { int x0; char *x4; int x8, xC; L(); void m(int); };
struct T { int x0; };
extern "C" void func_001ED948(T *t, int a, int b) { int v = t->x0; L l; l.x0 = a; l.x4 = D_0032FAC8; l.x8 = b; l.m(v); }

