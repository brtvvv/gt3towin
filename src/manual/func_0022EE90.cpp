struct Q { char c[16]; }; struct S { char p[0x18]; Q a; Q b; }; extern "C" void func_0022EE90(S *s) { s->a = s->b; *(unsigned *)&s->b = 0xFFFFFFFF; }
