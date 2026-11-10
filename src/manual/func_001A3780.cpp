struct MB { int x0, x4, x8, xC; virtual void f0(); virtual void f1(); void set(int v) { x8 = v; f1(); } };
struct M : MB { char q[0xC]; };
struct T { char p[0x28]; int x28; char q[8]; M **x34; int x38, x3C; char r[0x10]; int x50; char s[0x210 - 0x54]; M m[4]; M *x290, *x294; int x298; };
extern "C" void func_001B16C0(T *, int, int);
extern "C" void func_001A3780(T *t) { M *a = &t->m[0], *b = &t->m[1]; t->x50 = 0; a->x8 = 1; a->f1(); b->x8 = 1; b->f1(); t->m[2].set(0); t->m[3].set(0); func_001B16C0(t, t->x298, 0); t->x28 = 1; t->x290 = a; t->x294 = b; t->x34 = &t->x290; t->x38 = 2; t->x3C = 0; }

