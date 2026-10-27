extern float D_00351738;
struct S { char p[0x24]; float f; };
extern "C" void func_0019A378(S *s) { float v = s->f - D_00351738; s->f = v > 0.0f ? v : 0.0f; }
// @flags -ffast-math

