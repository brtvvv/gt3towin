struct T { virtual void f0(); virtual void f1(); };
extern "C" void func_00256088(T *, int); extern "C" void func_00258C50(); extern "C" void func_00258D54(int); extern "C" void func_00256108();
extern "C" void func_0020FE28(T *t, int a) { func_00256088(t, a); func_00258C50(); t->f1(); func_00258D54(a); func_00256108(); }

