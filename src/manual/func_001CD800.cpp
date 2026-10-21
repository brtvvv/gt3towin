struct S { int v, lo, hi; }; extern "C" void func_001CD800(S *s) { if (s->lo == s->hi) { s->v = s->hi; return; } if (s->v < s->lo) { s->v = s->lo; return; } if (s->v >= s->hi) s->v = s->hi - 1; }
