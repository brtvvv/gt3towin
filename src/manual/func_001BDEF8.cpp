struct F { int a; void (*fn)(int); char p[0x24]; int r; }; struct S { int a, b, n; }; extern "C" int func_001BDEF8(S *s, F *f, int x) { f->fn(x); s->n++; return f->r; }
