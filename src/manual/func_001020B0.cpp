struct T { T(); char p[0x35210]; };
struct S { int a; T *t; };
extern "C" void func_00219D10(T *);
extern "C" void func_001020B0(S *s) { if (s->t) return; s->t = new T; func_00219D10(s->t); }
