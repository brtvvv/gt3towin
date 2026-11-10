struct E { int a, b; };
struct T { int x0; E e[5]; E *x2C; E x30, x38, x40; float x48; };
extern "C" void func_0022CF20(E *, int); extern "C" void func_00269C80(int, int);
extern "C" void func_001A8F00(T *t) { if (!t->x0) return; t->x0 = 0; for (int i = 0; i < 5; i++) if (i != 2) func_0022CF20(&t->e[i], 1); func_0022CF20(t->x2C, 1); func_0022CF20(&t->x30, 1); func_0022CF20(&t->x38, 1); func_0022CF20(&t->x40, 1); t->x48 = 0.125f; func_00269C80(0xFFF, 0xFFF); }

