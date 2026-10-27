struct S { char p[0xC]; int a, b; }; extern "C" int func_00251E20(int, int); extern "C" void func_00244288(S *s, int a, int b) { s->a = a; s->b = b; func_00251E20(a, b); }
