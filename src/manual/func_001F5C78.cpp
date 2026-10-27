struct X { int a; int n; }; struct S { char p[0x38]; X *x; }; extern "C" int func_001F5C78(S *s) { if (!s) return 0; X *x = s->x; if (!x) return 0; return (x->n + 3) & ~3; }
