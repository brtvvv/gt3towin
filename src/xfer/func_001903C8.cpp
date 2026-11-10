// @flags -fexceptions
typedef unsigned int size_t;
struct X { char d[0x3C]; X(); void *operator new(size_t n); void operator delete(void *p, size_t n); };
extern "C" X *func_001903C8() { return new X; }

