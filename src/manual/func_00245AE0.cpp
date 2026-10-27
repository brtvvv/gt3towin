struct S { char p[0xC]; int c; char q[0x14]; int i24; char r[8]; int i30, i34; }; extern "C" int func_00245AE0(S *s) { if (s->i30) return s->i24; int v = s->c; if (s->i34) v *= 2; return v; }
