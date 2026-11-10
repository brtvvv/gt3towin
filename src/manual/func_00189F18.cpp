// @flags -fexceptions
typedef unsigned int size_t;
struct X { char d[0x3AC80]; X(int); void *operator new(size_t n); void operator delete(void *p, size_t n); };
extern "C" X *func_00189F18() { return new X(0); }

