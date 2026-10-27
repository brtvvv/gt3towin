struct O { virtual void d0(); virtual void v1(); }; struct S { char p[0x18]; O *o; }; extern "C" void func_00101C18(S *s) { if (s->o) s->o->v1(); }
