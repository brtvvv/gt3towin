struct T { char p[0x58]; int x58; char q[0x80 - 0x5C]; char *x80; };
extern float D_003518C8, D_003518CC;
extern "C" void func_00256190(int); extern "C" void func_001A90C8(char *, float); extern "C" void func_00253A70(unsigned); extern "C" void func_002540B0(int); extern "C" void func_00254258(int); extern "C" void func_00256088(); extern "C" void func_00258D54(float *); extern "C" void func_00258C50(); extern "C" void func_00259024(float, float, float); extern "C" void func_00258EB4(float *); extern "C" void func_002260A8(int); extern "C" void func_00256108(); extern "C" void func_002563C0();
extern "C" void func_001AA140(T *t) { float m[16]; func_00256190(0x40); func_001A90C8(t->x80 + 0x60, D_003518C8); func_00253A70(0xFF000000); func_002540B0(0); func_00254258(3); func_00253A70(0xFFFFFFFF); func_00256088(); func_00258D54(m); func_00258C50(); float s = D_003518CC; func_00259024(s, s, s); func_00258EB4(m); func_002260A8(t->x58); func_00256108(); func_002563C0(); }

