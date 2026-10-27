struct S { char p[0x10]; int f; }; extern "C" int func_001FABC8(S *s, int k) { switch (k) { case 1: case 6: if (s->f) return 2; } return -1; }
