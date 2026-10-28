struct V { float x, y, z; };
extern "C" void func_001A95B0(V *, float, float);
extern "C" void func_002200D8(float, float, float);
extern "C" void func_001A9858(char *s) { V v; func_001A95B0(&v, *(float *)(s + 0xA70), *(float *)(s + 0xA74)); float k = *(float *)(s + 0xA78); func_002200D8(v.x * k, v.y * k, v.z * k); }

