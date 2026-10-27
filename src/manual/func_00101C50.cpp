struct O { virtual void d0(); virtual void d1(); virtual void v2(int); }; struct S { char p[0x18]; O *o; }; extern "C" void func_00101C50(S *s, int x) { if (s->o) s->o->v2(x); }
