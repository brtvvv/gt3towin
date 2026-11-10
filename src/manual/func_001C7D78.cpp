// @flags -fexceptions
#include "/tmp/claude-1000/b18/hdr.h"
extern "C" int func_001C36B0(int, int);
struct X { HEAPOPS char d[0x18C]; X(int, void *, int, int, int); };
extern "C" void func_001C7D78(void *p0, int p1, int p2, int p3, int p4, int p5) { int k = func_001C36B0(p1, p3); int fl = p5 == 1; new X(p4, p0, p3, k, fl); }

