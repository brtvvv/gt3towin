struct S { char p[0xB8B4]; char a[1][8]; }; extern "C" void func_001ECAA0(S *s, int i, int j, int v) { s->a[i][j] = v; }
