struct A { long d[0xC7]; }; struct M { char d[4]; };
struct T { A a; M m; };
extern "C" void func_002184A8(M *, M *); extern "C" void func_00219538();
extern "C" T *func_002191D0(T *t, T *o) { t->a = o->a; func_002184A8(&t->m, &o->m); func_00219538(); return t; }

