struct V; struct T { V *v; char *x4; char p[0x8000 + 0x1790 - 8]; int x1790; };
struct V { char p[0xE0]; short d0; short a; int (*f0)(T *); short d1; short b; void (*f1)(T *, float); char q[8]; short d2; short c; void (*f2)(T *); short d3; short e; void (*f3)(T *); char r[8]; short d4; short g; void (*f4)(T *); };
extern float D_0035163C;
extern "C" int func_0017A080(char *, int, int, int);
#define VC(n, args...) t->v->f##n((T *)((char *)t + t->v->d##n) , ## args)
extern "C" void func_0017CFB8(T *t) { if (VC(0)) { if (!t->x1790) VC(1, D_0035163C); else VC(2); VC(3); } if (func_0017A080(t->x4 + 0x84, 9, 0, 1)) VC(4); }

