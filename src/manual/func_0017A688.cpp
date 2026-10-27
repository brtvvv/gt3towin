struct T { char p[0x1B5]; unsigned char m; }; struct S { char p[0x18]; T *t; char q[0x40 - 0x1C]; long v; int n; };
extern "C" void func_002394C0(S *, long);
extern "C" void func_0017A688(S *s, long v) { s->v = v; func_002394C0(s, v); int m = s->t->m; if (m < s->n) s->n = m; }

