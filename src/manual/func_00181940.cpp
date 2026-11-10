// @flags -fexceptions
typedef unsigned int size_t;
struct X { char d[0xC8C0]; X(); void *operator new(size_t n); void operator delete(void *p, size_t n); };
extern "C" X *func_00181940() { return new X; }

