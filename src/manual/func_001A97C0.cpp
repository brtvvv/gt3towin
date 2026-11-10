struct T { char p[0x10]; int x10; char q[0x9C0 - 0x14]; float x9C0, x9C4, x9C8; int p9CC, p9D0; float x9D4, x9D8, x9DC, x9E0; };
extern "C" void func_001A95B0(float *, float, float); extern "C" void func_0019C468(int, float *, float, float, float, float, float);
extern "C" void func_001A97C0(T *t, int a) { if (!(t->x10 & 0x400)) return; float v[4]; func_001A95B0(v, t->x9DC, t->x9E0); float k = 10.0f; v[0] *= k; v[1] *= k; v[2] *= k; func_0019C468(a, v, t->x9C0, t->x9C4, t->x9C8, t->x9D8, t->x9D4 * k); }

