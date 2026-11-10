struct T { char p[8]; float x8; char q[0x80 - 0xC]; int x80; };
extern char D_00342610[];
extern "C" int func_00220890(T *); extern "C" void func_00256088(); extern "C" void func_00259198(); extern "C" void func_0025920C(float *, char *); extern "C" void func_00256108();
extern "C" int func_002209C0(T *t) { if (!func_00220890(t)) return 0; func_00256088(); func_00259198(); float st[4]; func_0025920C(st, D_00342610); func_00256108(); t->x80 = 0.0f < -(t->x8 * 0.5f) - st[0]; return 1; }

