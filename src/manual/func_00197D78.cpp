struct S { char p[0x28]; unsigned char a; char q[2]; unsigned char b, c; }; extern "C" void func_00197D78(S *s) { if (s->a) s->b += 0x33; else s->b = 0; s->c += 0x33; }
