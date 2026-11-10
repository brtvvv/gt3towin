struct W { char p[0xC]; float xC; char q[0x4C - 0x10]; float x4C, x50; char r[0xA4 - 0x54]; };
struct E { char d[0x24]; };
struct T { char p[0xFE4]; W w[4]; char q[0x1274 - 0xFE4 - 4 * 0xA4]; E e[4]; };
extern "C" float func_0026B3D8(float); extern "C" float func_0026B828(float); extern "C" void func_001E7FA8(E *, W *, float);
extern "C" void func_001E8268(T *t) { E *e = t->e; W *w = t->w; for (unsigned i = 0; i < 4; i++) { float a = w->xC; float s = func_0026B3D8(a) * w->x4C; func_001E7FA8(e, w, s - func_0026B828(a) * w->x50); e++; w++; } }

