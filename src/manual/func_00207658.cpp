struct T { char p[0x418]; float x418; char q[4]; int x420; float x424; char x428[0x14]; char x43C[4]; };
extern float D_003521A0, D_003521A4;
extern "C" float func_0026B3D8(float); extern "C" void func_00207400(T *, float); extern "C" void func_00207468(T *, float); extern "C" float func_002071A8(float, float); extern "C" void func_00207C08(char *); extern "C" void func_00207278(char *, float, float, float);
extern "C" float func_00207658(T *t, int k, float a, float b, float c, float d) { switch (k) { case 0: break; case 1: { float m = c * D_003521A4; m *= func_0026B3D8(a * D_003521A0 / 180.0f); a -= d * m; break; } } t->x418 = a; func_00207400(t, b); func_00207468(t, a); t->x424 = func_002071A8(a, b); func_00207C08(t->x428); t->x420 = k; func_00207278(t->x43C, 1.0f, 0.0f, 2.0f); return a; }

