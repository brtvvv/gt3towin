struct V { float x, y, z, w; };
extern "C" void func_001A95B0(V *, float, float);
extern "C" void func_002200D8(float, float, float);
struct T { char p[0xA70]; float xA70, xA74, xA78; };
extern "C" void func_001A9858(T *t) { V v; func_001A95B0(&v, t->xA70, t->xA74); float s = t->xA78; func_002200D8(v.x * s, v.y * s, v.z * s); }

