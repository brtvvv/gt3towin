struct S { char p[0xE8]; long l; }; extern "C" int func_002370B8(S *s) { int r = 1; if (s->l) r = 0; return r; }
