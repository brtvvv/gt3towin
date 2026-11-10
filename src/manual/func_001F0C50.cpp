struct Q { char p[0x74]; int x74; };
struct C { char p[0x1368]; float x1368; };
struct TB { char p[0xE380]; unsigned xE380; int xE384; char q[0xE3A8 - 0xE388]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4();  virtual int g(); };
struct T : TB { };
extern "C" int func_001F3AC0(T *); extern "C" C *func_001F3A90(T *, int); extern "C" int func_001E17F8(C *); extern "C" void func_001E1870(C *, int, int, float, float, float);
extern "C" void func_001F0C50(T *t) { if (func_001F3AC0(t) == 1 && t->g() && (*(Q **)t)->x74) { for (int i = 0; i < t->xE384; i++) { C *c = func_001F3A90(t, i); if (func_001E17F8(c)) func_001E1870(c, 0, 0, 1.0f, 0.0f, c->x1368); } } if (func_001F3AC0(t) <= 0) { unsigned v = t->xE380 + 60; t->xE380 = v; if (0x405F7DFDu < v) t->xE380 = 0x405F7DFDu; } }

