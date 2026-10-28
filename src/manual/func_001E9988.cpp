struct S { char p[0x31]; unsigned char k; char q; unsigned char f; };
extern "C" int func_001E9988(S *s) { if (!(s->f & 2)) return s->k; int k = s->k; switch (k) { case 0: case 7: k = 12; break; case 1: k = 13; break; case 9: k = 14; break; } return k; }
