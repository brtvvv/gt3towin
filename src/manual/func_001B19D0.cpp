struct T { char p[0x28]; float f; }; struct S { T *a; char p[0x2C]; T *b; }; extern "C" float func_001B19D0(S *s) { if (!s->b || !s->a) return -1.0f; return s->b->f + s->a->f; }
