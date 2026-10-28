struct L { L(int, void *, void *); ~L(); void run(); char p[0x20]; };
struct Y { int v; };
struct X { char p[0x18]; Y *y; };
extern "C" void func_001AF2F8(void *a, X *b) { L l(b->y->v, a, b); l.run(); }
