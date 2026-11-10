struct L { int x0, x4, x8; L(); void m(int); };
struct T { int x0; };
extern "C" void func_001EE968(T *t, int a) { int v = t->x0; L l; l.x0 = a; l.x8 = 1; l.m(v); }

