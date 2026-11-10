typedef unsigned int size_t;
extern "C" void *xnew(size_t);
extern "C" void xdel(void *);
#define HEAPOPS void *operator new(size_t n) { return xnew(n); } void operator delete(void *p) { xdel(p); }
