struct B { long x[12]; }; struct S { char p[0x230]; B b; };
extern "C" void func_001477A0(S *s, B *b) { s->b = *b; }

