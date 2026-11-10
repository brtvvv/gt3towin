extern "C" void func_00102168(char *); extern "C" float func_0026D3D8(int *, float, float);
extern "C" void func_00102598(char *t) { float *p = (float *)(t + 0x10); func_00102168(t); int seed = 100; for (int i = 0; i < 256; i++) *p++ = func_0026D3D8(&seed, -320.0f, 0.0f); }

