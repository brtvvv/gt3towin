// @flags -fexceptions
#include "/tmp/claude-1000/b32/hdr.h"
extern "C" int func_001C36B0(int, int);
extern float D_0035156C;
struct V4 { float x, y, z, w; void set(float f) { x = f; y = f; z = f; w = f; } void copy(const V4 &o) { x = o.x; y = o.y; z = o.z; w = o.w; } };
struct B0 { HEAPOPS char p[0x1C]; virtual void f0(); };
struct B : B0 { char q[0x20]; V4 x40; char r[0xB0]; B(int, int); };
struct D : B { V4 m100; void *x110; D(int a, int b, void *p) : B(a, b) { m100.set(D_0035156C); x110 = p; m100.copy(x40); } };
extern "C" D *func_0014D578(char *t, int p1, int p2, int p3, int p4) {
    int k = func_001C36B0(p1, p3);
    D *x = new D(p3, k, ({ char *_q = t + 0x30628; !p4 ? _q + 8 : _q + 0x2C; }));
    return x;
}
