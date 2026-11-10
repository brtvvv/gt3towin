struct T;
extern char D_00346430[];
extern "C" float func_00247E38(void *, float *, float *); extern "C" void func_00252500(int); extern "C" int func_00248BA8(T *, int, float, float, float, float);
extern "C" int func_00248F20(T *t, float a, float b) { float vx, vy; float r = func_00247E38(D_00346430, &vx, &vy); if (r < -1.0f) return 0; if (1.0f < r) return 0; if (b < 2.0f) b = 2.0f; func_00252500(5); int n = (int)b; return func_00248BA8(t, 0, vx, vy, b, a / (n * n)); }

