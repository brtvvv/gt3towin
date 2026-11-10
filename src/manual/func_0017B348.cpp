struct A { unsigned x0; int p; void **x8; }; struct T { char p[0x18]; A *x18; };
extern "C" void func_00177E30(void *);
extern "C" void func_0017B348(T *t) { unsigned n = t->x18->x0; for (unsigned i = 0; i < n; i++) func_00177E30(t->x18->x8[i]); }

