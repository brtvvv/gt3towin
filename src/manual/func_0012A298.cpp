struct T { char p[0x100]; float x100; int x104; char q[4]; int x10C; signed char x110; };
extern float D_0035147C, D_00351480;
extern "C" void func_001BAEA0(T *); extern "C" int func_00129988(int);
extern "C" void func_0012A298(T *t) { func_001BAEA0(t); switch (t->x110) { case 0: t->x100 += D_0035147C; if (t->x100 >= 1.0f) { t->x100 = 1.0f; t->x110 = 1; } break; case 1: if (func_00129988(t->x104)) t->x110 = 2; break; case 2: t->x10C++; if (t->x10C > 50) t->x110 = 3; break; case 3: t->x100 -= D_00351480; if (t->x100 <= 0.0f) { t->x100 = 0.0f; t->x110 = 4; } break; case 4: break; } }

