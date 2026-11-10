// @flags -fexceptions
#include "/tmp/claude-1000/b66/hdr.h"
extern "C" int func_00232210(void *);
extern "C" char *strcpy(char *, const char *);
extern "C" int sprintf(char *, const char *, ...);
struct S { char d[0x40]; void init(int); };
struct T { char d[0x1F0]; T(); ~T(); char *a(); char *b(); };
extern "C" int func_00237AB8(T *);
struct L { char p[0x30]; L(); void m(int); int get(int, T *); ~L(); };
struct X { HEAPOPS char d[0x100]; X(int, int); void m(char *); };
extern "C" X *func_0011E208(int p0, int p1, int p2, int p3) {
    char buf[0x80];
    {
        S s;
        s.init(p3);
        L l;
        l.m(func_00232210(&s));
        T t;
        if (l.get(0, &t) && (!func_00237AB8(&t) || l.get(1, &t)))
            sprintf(buf, "%s %s", t.a(), t.b());
        else
            strcpy(buf, "error");
    }
    X *x = new X(p3, p1);
    x->m(buf);
    return x;
}

