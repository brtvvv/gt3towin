extern "C" int func_00240048(int);
extern "C" int func_00240178(int);
struct T { char p[0x14]; int x14; char q[0xC]; int x24, x28, x2C, x30; };
extern "C" void func_00158BE8(T *t) { t->x2C = func_00240048(t->x28) == 2; t->x30 = func_00240178(t->x28); t->x24 = t->x2C; t->x14 = t->x2C ^ 1; }

