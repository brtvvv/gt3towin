struct E { float f; char p[0xA0]; }; struct S { char p[0x1074]; E e[4]; }; extern "C" void func_001EBBA0(S *s, float v) { int i; for (i = 3; i >= 0; i--) s->e[i].f = v; }
