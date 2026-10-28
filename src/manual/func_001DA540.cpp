struct S { char p[0xB2]; unsigned char b; };
extern "C" int func_001DA540(S *s) { int t[5] = { 1, 2, 3, 4, 5 }; return t[s->b]; }

