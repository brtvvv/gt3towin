struct E { float x0, x4; char p[0x24]; float x2C; char x30[0xA4 - 0x30]; };
struct T { char p[0x1030]; E e[4]; };
extern "C" float func_001EB288(float, float, char *);
extern "C" void func_001EB318(T *t) { for (int i = 0; i < 4; i++) { E *e = &t->e[i]; e->x2C = func_001EB288(e->x0, e->x4, e->x30); } }

