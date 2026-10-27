struct S { char p[0x78]; int a[8]; }; extern "C" int func_00271758(S *s, int x) { for (int i = 0; i < 8; i++) if (s->a[i] == x) return i; return -1; }
