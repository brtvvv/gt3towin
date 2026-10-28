struct M { int a; };
struct B0 { char p[0x288]; virtual void f0();  virtual void g(); };
struct T : B0 { char q[0x60]; M m; };
extern char D_00326AE8[];
extern "C" void func_001B75E8(M *, char *, int), func_001B8610(M *); extern "C" int func_001B8170(M *, int), func_001B8B10(M *);
extern "C" void func_001738B8(T *t) { M *m = &t->m; func_001B75E8(m, D_00326AE8, 0); func_001B8170(m, 0); while (!t->m.a) { func_001B8B10(m); t->g(); } func_001B8610(m); }
