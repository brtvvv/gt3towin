struct EB { char p[8]; virtual void f0(int); };
struct T { int x0; EB **x4; int x8; };
extern "C" void func_0027D498(void *);
extern "C" void func_0015D028(T *t) { for (int i = 0; i < t->x8; i++) if (t->x4[i]) t->x4[i]->f0(3); if (t->x4) func_0027D498(t->x4); t->x4 = 0; }

