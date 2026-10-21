struct B { char p[0xEC8]; float f; }; struct S { char p[0x102C]; B *b; char q[0xC]; float f; }; extern "C" int func_0013D910(S *s) { if (s->f < -s->b->f) return 1; return 0; }
