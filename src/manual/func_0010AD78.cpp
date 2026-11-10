// @flags -fexceptions
#include "/tmp/claude-1000/b18/hdr.h"
extern char D_003526F0[], D_0030BF18[], D_0030C008[];
struct D { HEAPOPS char p[0x18]; float x18; char q[0xF8]; D(const char *, int); void set(const char *); void m(void *); };
extern "C" void func_0010AD78(void *p0, const char *p1) {
    D *x = new D(p1, (int)D_003526F0);
    x->set(D_0030BF18);
    x->set(D_0030C008);
    x->x18 = 4.0f;
    x->m(p0);
}

