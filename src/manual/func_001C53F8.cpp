// @flags -fexceptions
typedef unsigned int size_t;
struct X { char d[0x1538]; X(); };
extern X *D_00353FDC;
extern "C" void func_001C53F8() { D_00353FDC = new X; }

