// @flags -fexceptions
typedef unsigned int size_t;
struct X { char d[0x120]; X(int, int); void *operator new(size_t n); void operator delete(void *p); };
extern "C" X *func_00110078(int p0, int p1, int p2, int p3) { return new X(p3, p1); }

