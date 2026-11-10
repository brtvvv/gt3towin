struct X { char p[0x3E4]; float x3E4; };
extern "C" int func_001EDF90(X *); extern "C" float func_001F3AD0(void *);
extern "C" void func_001EDFA0(void *t, X *a, X *b, int *out, float *outf) { int d = func_001EDF90(a) - func_001EDF90(b); float df = a->x3E4 - b->x3E4; if (d > 0 && df < 0.0f) { d--; df += func_001F3AD0(t); } else if (d < 0 && 0.0f < df) { d++; df -= func_001F3AD0(t); } *out = d; *outf = df; }

