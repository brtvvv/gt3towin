struct B { int x[8]; }; struct S { char p[0x2104]; B b; };
extern "C" void func_001798B0(S *s, B *b) { s->b = *b; }

