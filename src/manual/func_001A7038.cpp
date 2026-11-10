// @flags -fexceptions
extern "C" void *memset(void *, int, unsigned int);
struct B { char pad[0x18]; B(int); ~B(); };
struct D : B { char m[0x10]; int x28; D() asm("func_001A7038"); };
D::D() : B(0) { memset(m, 0, 0x10); x28 = 0; }

