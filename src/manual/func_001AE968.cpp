struct S { char p[0x2040]; char *b; }; extern "C" S *func_001AE968(S *s) { s->b = (char *)(((unsigned)s + 0x3F) & ~0x3F); return s; }
