// @flags -fexceptions
#include "/tmp/claude-1000/b20/hdr.h"
extern char D_00318E10[];
extern "C" int func_001C36B0(int, int);
extern "C" void func_0023C8E8(char *, int);
struct S { char d[0x80]; S(const char *, char *); };
struct X { HEAPOPS char d[0x100]; X(int, int); void m(S *); };
struct T { char p[0xE7C]; int xE8C; };
extern "C" X *func_00137EF0(T *t, int p1, int p2, int p3) {
    int k = func_001C36B0(p1, p3);
    char buf[0x40];
    func_0023C8E8(buf, t->xE8C);
    S s(D_00318E10, buf);
    X *x = new X(p3, k);
    x->m(&s);
    return x;
}

