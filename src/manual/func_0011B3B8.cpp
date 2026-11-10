// @flags -fexceptions
#include "/tmp/claude-1000/b54/hdr.h"
struct V3 { float a, b, c; void set(float x, float y, float z) { a = x; c = z; b = y; } };
struct P { char p[0x1C]; virtual ~P(); };
struct Q { V3 v20, v2C; float x38, x3C; char q[0x78]; virtual ~Q(); };
struct S { void m(int); };
struct B : P, Q { char r[0x14]; S xD0; char r2[0x24]; B(int, int, int); ~B(); void m(); };
struct D : B { HEAPOPS char e[0x30]; void init2(int, int, int);
    D(int a, int b, int c, int x, int y, int g, float fx, float fy, float fz, float fw) : B(a, b, c) {
        v20.set(0, 0, fx); v2C.set(0, 0, fy); x38 = fz; x3C = fw; init2(x, y, 0); m(); xD0.m(g); } };
struct T { char p[0x104]; int x104, x108; };
struct U { char p[0x44]; float x44, x48, x4C, x50, x54; };
extern "C" D *func_0011B3B8(int p0, T *p1, U *p2, int p3, int a4, int a5, int a6, int a7) {
    float d = p2->x54;
    float c = p2->x50;
    float a = p2->x44 + c * 0.5f;
    float b = 448.0f - (p2->x48 + d * 0.5f);
    D *x = new D(a4, a5, a6, p1->x108, p1->x104, a7, a, b, c, d);
    return x;
}

