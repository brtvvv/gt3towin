struct E { int x0; char p[0xC]; virtual void f0(); virtual void f1(); };
struct T { char p[0x34]; E **x34; int x38; int x3C; };
extern "C" void func_001B1CD8(T *t) { for (int i = 0; i < t->x38; i++) { E *e = t->x34[i]; int v = t->x3C == i; if (e->x0 != v) { e->x0 = v; e->f1(); } t->x34[i]->f0(); } }

