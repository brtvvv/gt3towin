struct V4 { float x, y, z, w; };
struct T { char p[0xF0]; int xF0; };
extern "C" int func_001BE158(V4 *, float);
extern "C" void func_001B0DA8(V4 *v, T *t) { V4 w; float x = v->x + v->x, y = v->y + v->y, z = v->z + v->z; w.w = v->w; w.x = x; w.y = y; w.z = z; t->xF0 = func_001BE158(&w, 1.0f); }

