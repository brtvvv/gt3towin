struct S { char p[0x14]; int a[5]; }; extern "C" void func_0022A280(int, int, int); extern "C" void func_0022A470(S *s, int x) { int i; for (i = 0; i < 5; i++) func_0022A280(s->a[i], x, i == 3); }
