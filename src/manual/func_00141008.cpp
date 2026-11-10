// @flags -fexceptions
#include "/tmp/claude-1000/b9/hdr.h"
struct T { char p[0xE58]; char xE58[4]; };
struct X { HEAPOPS char d[0x228]; X(void *, int, int, int); };
extern "C" void func_00141008(T *p0, int p1, int p2, int p3, int p4) { char *m = p0->xE58; new X(m, p4, p3, p1); }

