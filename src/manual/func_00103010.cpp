// @flags -fexceptions
typedef unsigned int size_t;
extern "C" void *xnew(size_t);
extern "C" void xdel(void *);
struct X { char d[0x10C]; X(int, int); void *operator new(size_t n) { return xnew(n); } void operator delete(void *p) { xdel(p); } };
extern "C" X *func_00103010(int p0, int p1, int p2, int p3) { return new X(p3, p1); }

