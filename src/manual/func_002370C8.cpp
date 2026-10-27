struct T { char p[0xC]; unsigned short k; }; struct S { char p[0x1D4]; void *x; };
extern "C" T *func_00235DB0(S *); extern "C" int func_002327C0(void *, int);
extern "C" int func_002370C8(S *s) { T *t = func_00235DB0(s); if (!t) return 0; return func_002327C0(s->x, t->k); }

