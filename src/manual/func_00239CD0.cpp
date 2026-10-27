struct A { char p[0x190]; long l; }; struct S { char p[0x18]; A *a; }; extern "C" int func_00239CD0(S *s) { return s->a->l; }
