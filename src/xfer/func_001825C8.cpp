// @flags -fexceptions
typedef unsigned int size_t;
struct X { char d[0x16EC0]; X(); void *operator new(size_t n); void operator delete(void *p, size_t n); };
extern "C" X *func_001825C8() { return new X; }

