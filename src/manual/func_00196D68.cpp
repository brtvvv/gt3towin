struct E { virtual void f0();  virtual void g(); };
extern "C" void func_00196D68(char *s) { char *p = s + 4; for (int i = 1; i >= 0; i--) { ((E *)p)->g(); p += 0xA47C; } }

