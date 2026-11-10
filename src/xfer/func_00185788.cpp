// @flags -fexceptions
typedef unsigned int size_t;
struct X { char d[0x35000]; X(); void *operator new(size_t n); void operator delete(void *p, size_t n); };
extern "C" X *func_00185788() { return new X; }

