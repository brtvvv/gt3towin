struct B { int x[8]; }; struct S { char p[0x1F4]; B b; };
extern "C" void func_00239328(S *s, B *b) { s->b = *b; }

