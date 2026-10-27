struct S { char p[0xFBA8]; int a; int b; };
extern "C" int func_00148CA0(S *s, int x) { x -= s->a; if (x < 0) return -x; if (x >= s->b) return x - s->b; return 0; }

