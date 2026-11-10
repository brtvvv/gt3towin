// @flags -fexceptions
#include "/tmp/claude-1000/b16/hdr.h"
extern "C" int func_001C36B0(int, int);
struct X { HEAPOPS char d[0x208]; X(int, int, int, int, int); };
extern "C" void func_001C30C8(int p0, int p1, int p2, int p3, int p4) { int k = func_001C36B0(p1, p3); new X(p4, p0, p1, p3, k); }

