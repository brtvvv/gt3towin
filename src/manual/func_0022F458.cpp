struct S; struct T { char p[0x4];  virtual void d0(); virtual void m(S *); }; struct S { char p[0xC]; T *t; }; extern "C" void func_0022F458(S *s) { if (s->t) s->t->m(s); }
