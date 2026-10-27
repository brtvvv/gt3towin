struct T { char p[0xC]; unsigned short k; }; struct S { int a, b; void *x; };
extern "C" T *func_00232658(S *, int, int); extern "C" int func_002327C0(void *, int);
extern "C" int func_00239A80(S *s, int v) { T *t = func_00232658(s, 0x22, v); if (!t) return 0; return func_002327C0(s->x, t->k); }

