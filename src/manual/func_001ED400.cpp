struct S { char p[0x16C4]; unsigned int v; }; extern "C" int func_001ED400(S *s, unsigned int a) { if (!(a < s->v)) return 0; s->v = a; return 1; }
