struct B { virtual ~B(); };
struct D : B { };
struct S { char p[0x3C]; B *b; };
extern "C" int func_0017AC50(S *s) { B *b = s->b; if (b) return dynamic_cast<D *>(b) != 0; return 0; }

