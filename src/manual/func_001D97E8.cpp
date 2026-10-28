struct O { virtual void f0(); virtual void f1();  virtual void g(); };
extern "C" void func_00256088(void), func_00258C50(void), func_00256108(void), func_001D96A8(int, float, float, float);
extern "C" void func_001D97E8(int a, O *o, float x, float y, float z) { func_00256088(); func_00258C50(); o->g(); func_001D96A8(a, x, y, z); func_00256108(); }
