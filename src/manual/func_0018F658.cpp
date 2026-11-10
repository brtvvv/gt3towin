struct X { char p[0x20E0]; int x20E0; };
struct L { int n; int x4; X **x8; };
struct A { char p[0x18]; L *x18; };
struct E { char d[0x1F8]; };
struct T { char p[0x298]; E e[1]; };
extern "C" int func_00232C10(char *, E *); extern "C" void func_0017B260(A *);
extern "C" void func_0018F658(T *t, A *a) { int i; int n = a->x18->n; for (i = 1; i < n; i++) func_00232C10((char *)a->x18->x8[i] + 0x20, &t->e[i]); func_0017B260(a); for (i = 0; i < n; i++) a->x18->x8[i]->x20E0 = *(int *)((char *)(i * 0x1F8 + (int)t) + 0x484); for (i = 0; i < n; i++); }

