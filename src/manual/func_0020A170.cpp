struct V { virtual int g0(); virtual int g1(); virtual int g2(); virtual int g3(); virtual int g4(); virtual int g5(); virtual int g6(); virtual int g7(); virtual int g8(); virtual int g9();  };
struct E { char p[0x5D4]; V *v; char q[0x24C0 - 0x5D8]; };
struct S { E e[4]; char pad[0x96D8 - 4 * 0x24C0]; int idx; };
extern "C" int func_0020A170(S *s) { return s->e[s->idx].v->g9(); }

