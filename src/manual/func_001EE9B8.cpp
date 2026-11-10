struct L { int x0, x4, x8; L(); void m(int); };
struct T { int x0; };
extern "C" void func_001EE9B8(T *t, int a) { int v = t->x0; L l; l.x0 = a; l.x8 = 6; l.m(v); }

