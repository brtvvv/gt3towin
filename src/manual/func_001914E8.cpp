struct S { int a, b; unsigned c; }; extern "C" void func_001914E8(S *s, unsigned v) { if (v > 0xFFFFFFE) v = 0xFFFFFFF; s->c = v; }
