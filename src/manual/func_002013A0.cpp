struct O { char p[0x88]; float s; };
extern "C" void func_002566C8(float, float, float, float, float, float, float);
extern "C" void func_001FF9F0(O *, float);
extern "C" void func_002013A0(O *o, float *m) { float s = o->s; func_002566C8(m[0], m[1], m[3], m[2], m[4], m[5], m[6] * s); func_001FF9F0(o, o->s); }
