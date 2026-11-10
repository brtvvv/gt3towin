struct E { int x0; float x4, x8, xC; short x10; char p[0xA]; float x1C, x20, x24; };
struct L { int n; E e[1]; };
struct M { char p[0x18]; L *x18; };
struct T { int x0; M *x4; };
extern "C" int func_001FACD8(T *, int); extern "C" float func_0026B828(float); extern "C" float func_0026B3D8(float);
extern "C" void func_001FAD78(T *t, int a, float *o, float *o2, int *o3) { int i = func_001FACD8(t, a); E *e = &t->x4->x18->e[i]; o[0] = e->x4; o[1] = e->x8; o[2] = e->xC; o2[0] = e->x1C; o2[1] = e->x20; o2[2] = e->x24; *o3 = e->x10; o[0] -= func_0026B828(o2[2]) * 0.5f; o[1] += func_0026B3D8(o2[2]) * 0.5f; }

