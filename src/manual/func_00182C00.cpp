// @flags -fexceptions
typedef unsigned int size_t;
struct X { char d[0x34580]; X(); void *operator new(size_t n); void operator delete(void *p, size_t n); };
extern "C" X *func_00182C00() { return new X; }

