struct S { char p[0x118]; int a; char q[0x24]; int (*fn)(void *, int); void *ctx; }; extern "C" int func_001B4E20(S *s) { if (s->fn) return s->fn(s->ctx, s->a); return 1; }
