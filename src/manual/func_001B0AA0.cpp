// @flags -fexceptions
#include "/tmp/claude-1000/b7/hdr.h"
struct X { HEAPOPS char d[0xC4]; X(); };
extern "C" int func_001C34A0(void *, void *);
extern "C" void func_001C38A0(void *, void *, int);
extern "C" void func_001B0AA0(void *a, void *b) { if (func_001C34A0(a, b)) func_001C38A0(a, b, 1); else new X; }

