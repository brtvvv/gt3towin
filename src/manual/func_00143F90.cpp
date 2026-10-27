struct S { char p[0x6E]; unsigned short h; }; extern "C" int func_00143F90(S *s) { int h = s->h; if ((unsigned)(h - 2) >= 0x1F) h = 0x40; return h; }
