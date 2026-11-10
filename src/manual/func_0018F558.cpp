struct L { int n; int x4; char **x8; };
struct A { char p[0x18]; L *x18; };
struct E { char d[0x1F8]; };
struct T { char p[0x290]; int x290; char q[0x298 - 0x294]; E e[1]; };
extern "C" int func_00232C10(char *, E *); extern "C" void func_0017B260(A *); extern "C" void func_0018F0B0(T *, A *); extern "C" void func_0018F4A0(T *, A *); extern "C" void func_0017B2A0(A *, int, int);
extern "C" void func_0018F558(T *t, A *a) { int i; int n = a->x18->n; if (t->x290) { for (i = 1; i < n; i++) func_00232C10(a->x18->x8[i] + 0x20, &t->e[i]); func_0017B260(a); func_0018F0B0(t, a); for (i = 0; i < n; i++); } else { func_0018F4A0(t, a); func_0017B260(a); func_0017B2A0(a, 0, n - 1); } }

