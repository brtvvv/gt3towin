// @flags -fexceptions
#include "/tmp/claude-1000/b33/hdr.h"
extern "C" int func_001C36B0(int, int);
extern "C" float func_00246B20(char *, float);
extern "C" int func_0027C1D8(float);
extern "C" int func_002469A8(char *);
extern "C" void func_0026D950(char *, const char *, ...);
extern char D_002F7008[], D_00316540[];
struct E { int x0; char *x4; int x8; float xC; };
struct G { char p[0xC8]; E e[8]; };
extern G *D_00352E94;
struct B0 { HEAPOPS char p[0x1C]; virtual void f0(); };
struct B : B0 { char r[0xE0]; B(int, int); void m(char *); };
struct D : B { char m100[0x80]; D(int a, int b) : B(a, b) {} };
extern "C" D *func_0012D218(int p0, int p1, int p2, int p3, int p4) {
    int k = func_001C36B0(p1, p3);
    D *x = new D(p3, k);
    char *s = D_002F7008;
    float f = func_00246B20(s, (D_00352E94->e + p4)->xC);
    char *fmt = D_00316540;
    int a = func_0027C1D8(f);
    func_0026D950(x->m100, fmt, a, func_002469A8(s));
    x->m(x->m100);
    return x;
}

