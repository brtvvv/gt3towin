struct V { virtual int g0(); virtual int g1(); virtual int g2(); virtual int g3(); virtual int g4(); virtual int g5(); virtual int g6(); virtual int g7(); virtual int g8(); virtual int g9(); virtual int g10(); virtual int g11(); virtual int g12(); virtual int g13(); virtual int g14(); virtual int g15();  };
struct E : V { char p[0xA47C - 4]; };
struct S { int a; E e[2]; int idx; };
extern "C" int func_00196F30(S *s) { E *e = &s->e[s->idx]; return e->g5(); }

