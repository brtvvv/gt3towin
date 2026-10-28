typedef struct T { char p[0xC]; int xC; char q[0xC]; int x1C, x20, x24, x28, x2C, x30, x34; char r[4]; struct T *x3C; struct Q *x40; } T;
typedef struct Q { int x0, x4; char p[4]; T *xC, *x10; } Q;
typedef struct S { char p[0x10]; int x10, x14; char q[4]; int x1C, x20, x24, x28, x2C, x30; T *x34; } S;
void func_00287DD8(int);
void func_00289D18(S *s) { T *t = s->x34; Q *q = t->x40; if (!q->xC) q->xC = t; else q->x10->x3C = t; q->x10 = t; { int a = s->x14; int b = s->x1C; t->x20 = a; t->x1C = b; } t->x24 = s->x20; t->xC = s->x24; t->x28 = s->x28; t->x2C = s->x2C; t->x30 = s->x30; t->x34 = s->x10; if (q->x0 >= 0 && !q->x4) func_00287DD8(q->x0); }
