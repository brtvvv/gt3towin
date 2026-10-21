struct E { signed char c; char p[15]; }; struct S { char p[0x30]; E e[12]; int t[1]; }; extern "C" int func_002146B8(S *s, int i) { if (s->e[i].c < 0) return 0x27CC4BC; return s->t[i]; }
