struct S { char p[0x18]; unsigned a, b; char q[8]; unsigned c, d; }; extern "C" void func_00135428(S *s) { s->d = 0x400000; s->a = 0xFFFFFFFF; s->b = 0; s->c = 0xFFFFFFFF; }
