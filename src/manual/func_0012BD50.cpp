struct S { char p[0x118]; int n; };
extern "C" int func_0012B768(S *, int), func_0012BC20(S *, int);
extern "C" int func_0012BD50(S *s) { for (int i = 0; i < s->n; i++) { if (func_0012B768(s, i) == 10) continue; if (func_0012BC20(s, i)) return 1; } return 0; }
