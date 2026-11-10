// @flags -fexceptions
typedef unsigned int size_t;
struct X { char d[0x2148]; X(); void *operator new(size_t n); void operator delete(void *p, size_t n); };
extern "C" X *func_00179550() { return new X; }

