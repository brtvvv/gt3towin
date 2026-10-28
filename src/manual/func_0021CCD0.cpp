struct S { unsigned char *p; unsigned n; };
extern "C" int func_0021CCD0(S *s) { unsigned n = s->n; if (!n) return 1; for (unsigned i = 0; i < n; i++) if (s->p[i]) return 0; return 1; }

