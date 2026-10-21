extern int D_002C59B0[] __attribute__((section(".data"))); struct S { int a, b; }; extern "C" int func_0018B008(S *s, int f) { if (!f) return s->a; return D_002C59B0[s->b]; }
