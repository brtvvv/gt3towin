struct S { char p[0x16]; unsigned short n, m; char q[0x2C - 0x1A]; void **a; char r[4]; void ***b; char s[4]; void *c; };
extern "C" void func_0024A620(void *); extern "C" void func_002276C0(void *);
extern "C" void func_00225950(S *s) { int i, j; if (!s) return; for (i = 0; i < s->n; i++) if (s->a[i]) func_0024A620(s->a[i]);
 if (s->b) for (i = 0; i < s->m; i++) { if (s->b[i] && s->b[i] != s->a) for (j = 0; j < s->n; j++) func_0024A620(s->b[i][j]); }
 if (s->c) func_002276C0(s->c); }

