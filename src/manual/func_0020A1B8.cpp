struct V { virtual int g0(); virtual int g1(); virtual int g2(); virtual int g3(); virtual int g4(); virtual int g5(); virtual int g6(); virtual int g7(); virtual int g8(); virtual int g9(); virtual int g10(); virtual int g11(); virtual int g12(); virtual int g13(); virtual int g14(); virtual int g15(); virtual int g16(); virtual int g17(); virtual int g18(); virtual int g19(); virtual int g20();  };
struct E { char p[0x5D4]; V *v; char q[0x24C0 - 0x5D8]; };
struct S { E e[4]; char pad[0x96D8 - 4 * 0x24C0]; int idx; };
extern "C" int func_0020A1B8(S *s) { return s->e[s->idx].v->g20(); }

