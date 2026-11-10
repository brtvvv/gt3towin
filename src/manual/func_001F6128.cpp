struct B { int d[0x2000]; };
struct T { int x0; int x4; char p[0x48]; B *x50; };
extern "C" void func_001F6128(T *a, T *b) { if (a->x4 && b->x4) *a->x50 = *b->x50; }

