struct S { char p[0xC]; int f; }; extern "C" int func_001FABF8(S *s, int k) { switch (k) { case 2: case 6: if (s->f) return 1; } return -1; }
