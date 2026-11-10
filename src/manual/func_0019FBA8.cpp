struct T { int x0; unsigned short x4; short p6; char x8[0x20]; float x28; char q[0x48 - 0x2C]; float x48, x4C, x50; };
extern "C" void func_0025920C(float *, char *); extern "C" void func_00256088(); extern "C" void func_00258C50(); extern "C" int func_0019FCA0(T *); extern "C" void func_0019FA30(float *, float *, int, float); extern "C" void func_00256108();
extern "C" void func_0019FBA8(T *t) { float v[4]; func_0025920C(v, t->x8); if (t->x4 & 1) { func_00256088(); func_00258C50(); func_0019FA30(&t->x48, v, func_0019FCA0(t), t->x28); func_00256108(); } else t->x4 |= 1; t->x48 = v[0]; t->x4C = v[1]; t->x50 = v[2]; }

