struct Bk { long d[0x82]; };
struct S { char p[0x198]; Bk b; };
extern "C" void func_0017F000(S *s, Bk *b) { s->b = *b; }

