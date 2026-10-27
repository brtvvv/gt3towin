struct S { char p[0x5C]; unsigned char a[8]; unsigned char b[8]; }; extern "C" int func_001DA730(S *s, int i, char *x, char *y) { *x = 0; i >>= 1; *y = s->a[i]; return s->b[i]; }
