// @flags -fexceptions
typedef unsigned int size_t;
struct X { char d[0x3B840]; X(); void *operator new(size_t n); void operator delete(void *p, size_t n); };
extern "C" X *func_0018AB38() { return new X; }

