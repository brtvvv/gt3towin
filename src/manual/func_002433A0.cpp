// @flags -fexceptions
typedef unsigned int size_t;
struct X { char d[0x58]; X(int); };
extern X *D_00354940;
extern "C" void func_002433A0(int p0) { D_00354940 = new X(p0); }

