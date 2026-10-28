struct O { virtual void f0(); virtual void f1(); };
extern "C" void func_00256088(void), func_00258C50(void), func_00258D54(void *), func_00256108(void);
extern "C" void func_0020FE28(O *o, void *m) { func_00256088(); func_00258C50(); o->f1(); func_00258D54(m); func_00256108(); }

