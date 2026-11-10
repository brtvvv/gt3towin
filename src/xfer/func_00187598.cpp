// @flags -fexceptions
typedef unsigned int size_t;
struct X { char d[0x60]; X(); void *operator new(size_t n); void operator delete(void *p, size_t n); };
extern "C" X *func_00187598() { return new X; }

