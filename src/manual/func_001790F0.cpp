struct S { char p[0x11C8]; int x[5]; int a[1]; }; extern "C" int func_0017C2C0(int *, int *, int); extern "C" void func_001790F0(S *s, int i, int v) { s->a[i] = v; func_0017C2C0(s->a, s->x, i); }
