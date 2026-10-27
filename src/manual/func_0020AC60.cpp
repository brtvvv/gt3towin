struct V { virtual int g0(); virtual int g1(); virtual int g2(); virtual int g3(); virtual int g4();  };
struct E { char p[0x5D4]; V *v; char q[0x24C0 - 0x5D8]; };
struct S { E e[4]; char pad[0x96D8 - 4 * 0x24C0]; int idx; };
extern "C" int func_0020AC60(S *s) { return s->e[s->idx].v->g4(); }

