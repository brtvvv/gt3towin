// @flags -fexceptions
struct X { char d[0x70]; X(); void m(int, float); ~X(); };
extern "C" void func_001D92B8(int, int, X *, int);
extern "C" void func_001D95A8(int p0, int p1, int p2, int p3, float f) { X t; t.m(p2, f); func_001D92B8(p0, p1, &t, p3); }

