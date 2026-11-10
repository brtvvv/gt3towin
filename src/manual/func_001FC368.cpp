struct E { float x, y; char p[0x10 - 8]; float a, b; char q[0x44 - 0x10 - 8]; };
struct T { char p[8]; E e[8]; char q[0x390 - 8 - 8 * 0x44]; float ox, oy; char r[0x39C - 0x390 - 8]; float ang; };
extern "C" void func_0026B708(float, float *, float *);
extern "C" void func_001FC368(T *t) { float s, c; func_0026B708(t->ang, &s, &c); for (int i = 0; i < 8; i++) { t->e[i].a = c * t->e[i].x - s * t->e[i].y + t->ox; t->e[i].b = s * t->e[i].x + c * t->e[i].y + t->oy; } }

