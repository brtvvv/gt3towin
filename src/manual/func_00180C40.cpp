struct Q { char p[0x136E]; unsigned char x136E; };
struct N { int x0; N *next; char p[0x10]; Q *x18; };
struct L { char p[0x10]; N *head; };
struct R { char p[0x80]; int x80; };
struct S { char p[0x18]; L *x18; char q[0x38 - 0x1C]; R **x38; };
struct TB { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5();  virtual char *g(); };
struct T : TB { S *x4; };
extern "C" void func_00226CB8(int); extern "C" void func_001A9A88(int, char *); extern "C" void func_0019CE28(char *); extern "C" int func_0020A2C0(char *, S *, N *); extern "C" void func_00256088(); extern "C" void func_00178290(N *, float); extern "C" void func_00178468(N *, char *, float); extern "C" void func_00256108(); extern "C" void func_0019D1D0(char *);
extern "C" void func_00180C40(T *t) { func_00226CB8(1); char *o = t->g(); char *c = (char *)t + 0x9830; S *s = t->x4; L *l = s->x18; func_001A9A88((*s->x38)->x80, c); func_0019CE28(c); for (N *n = l->head; n; n = n->next) { Q *q = n->x18; if (func_0020A2C0(o, t->x4, n) && !q->x136E) { func_00256088(); func_00178290(n, 0.0f); func_00178468(n, (char *)t + 0x9830, 0.0f); func_00256108(); } } func_0019D1D0((char *)t + 0x9830); }

