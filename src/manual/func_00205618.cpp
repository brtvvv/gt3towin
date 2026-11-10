extern "C" void func_002566C8(float, float, float, float, float, float, float);
struct T { char p[0x88]; float x88; };
extern "C" void func_001FF9F0(T *, float);
extern "C" void func_00205618(T *t, float *p) { float k = t->x88; float v = p[6]; func_002566C8(p[0], p[1], p[3], p[2], p[4], p[5], v * k); func_001FF9F0(t, t->x88); }

