struct T { char p[0x28]; int x28; };
extern int D_00354474;
extern "C" void func_00252500(int); extern "C" void func_00252790(int); extern "C" void func_00253908(int, float); extern "C" void func_00253F18(float); extern "C" void func_00253A98(int); extern "C" void func_00253A70(unsigned); extern "C" void func_002537F0(int); extern "C" void func_002539B0(int, int); extern "C" void func_00253958(int, float); extern "C" void func_002538C8(int); extern "C" void func_0024E010(int); extern "C" void func_0024DDB8(void *); extern "C" void func_0024E048();
extern "C" void func_00225F98(T *t) { if (D_00354474) func_00252500(5); else func_00252790(5); float z = 0.0f; func_00252500(4); func_00252790(3); func_00252500(15); func_00253908(0x44, z); func_00253F18(z); func_00253A98(1); func_00253A70(0xFFFFFFFFu); func_002537F0(3); func_002539B0(6, 0x20); func_00253958(5, 0.5f); func_002538C8(0); func_0024E010(t->x28); func_0024DDB8((void *)func_0024E048); }

