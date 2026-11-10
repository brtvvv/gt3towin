// @flags -fexceptions
typedef unsigned int size_t;
struct X { char d[0x34600]; X(); void *operator new(size_t n); void operator delete(void *p, size_t n); };
extern "C" X *func_0018FE20() { return new X; }

