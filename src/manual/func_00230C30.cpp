struct R { int a; int b; };
struct B0 { int on; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3();  virtual void g(); };
struct S : B0 { signed char k; char p[3]; unsigned char c; char q[3]; int x10; char r[0x20]; int x34; char m[4]; };
extern "C" R *func_00230B40(int);
extern "C" void func_00230AD8(int, char *);
extern "C" void func_00230C30(S *s, int c) { if (!c) { s->on = 0; s->c = 0; return; } s->on = 1; if (s->c != c) { s->c = c; s->x10 = func_00230B40((unsigned char)c)->b; } if (s->x34) func_00230AD8(s->k, s->m); s->g(); }
