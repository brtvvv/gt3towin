struct E { virtual void f3(); virtual void f4(); virtual void f5();  virtual void f6(void *); };
extern "C" void func_00196E18(char *s, void *a) { char *p = s + 4; for (int i = 1; i >= 0; i--) { ((E *)p)->f6(a); p += 0xA47C; } }
