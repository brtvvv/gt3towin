// @flags -fexceptions
typedef unsigned int size_t;
struct X { char d[0x238]; X(int); };
extern "C" X *func_00147AE0(int p0) { return new X(p0); }

