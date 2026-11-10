struct O { virtual void f0(); virtual void f1(); virtual void f2(); };
extern "C" void func_00256088(); extern "C" void func_00258C50(); extern "C" void func_001D96A8(void *, float, float, float); extern "C" void func_00256108();
extern "C" void func_001D97E8(void *a, O *o, float x, float y, float z) { func_00256088(); func_00258C50(); o->f2(); func_001D96A8(a, x, y, z); func_00256108(); }

