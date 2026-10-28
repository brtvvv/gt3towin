struct O { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual int g(); };
extern "C" void func_00244068(O *, int);
extern "C" int func_00243F88(O *o, int x) { int r = o->g(); func_00244068(o, x); return r; }

