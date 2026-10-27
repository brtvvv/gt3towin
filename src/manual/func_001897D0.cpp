struct S { char p[0xA4A0]; char a[1]; }; extern "C" void func_001897D0(S *s, int i, int v) { s->a[i] = v; }
