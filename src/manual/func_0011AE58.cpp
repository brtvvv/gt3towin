struct X { char p[0x104]; int a; int b; };
struct T { T(int, int, int, int); char p[0x16C]; void *operator new(unsigned); void operator delete(void *); };
extern "C" void func_0011AE58(int u, X *x, int a2, int a3, int t0, int t1, int p, int q) { new T(x->b, x->a, p, q); }
