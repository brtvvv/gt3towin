struct E { float x0, x4, x8, xC; char p[0x24 - 0x10]; };
struct T { char p[0x284]; float x284[2]; char q[0x1274 - 0x28C]; E e[4]; };
extern "C" void func_001E66A8(T *t) { for (int i = 0; i < 4; i++) { E *e = &t->e[i]; float v = -t->x284[i >> 1] * (e->x4 + e->x8); e->xC = v; float z = *(float *)((char *)t + 0x1004 + i * 0xA4); if (z != 0.0f) { if (0.0f < z) e->xC = v - e->x0; else e->xC = v + e->x0; } } }

