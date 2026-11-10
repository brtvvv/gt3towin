// @flags -fexceptions
struct Q { int x0; };
struct P { char pad[0x18]; Q *q; };
struct X { char d[0x18]; X(int, void *, P *); void run(); ~X(); };
extern "C" void func_001AF2F8(void *a, P *b) { X t(b->q->x0, a, b); t.run(); }

