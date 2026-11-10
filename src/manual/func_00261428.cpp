struct P { int max, init, x8; int p[3]; };
struct T { char *x0; int x4; int x8; int xC; int x10; int x14; int x18; int x1C; int x20; int x24; };
extern char D_00347400[];
extern "C" T *func_0026D5E0(int); extern "C" void func_0027ED70(void *, int, int); extern "C" int func_00286EA0(void *); extern "C" char *func_00261C20(int);
extern "C" T *func_00261428(int a, int b, int c, int d) { T *t = func_0026D5E0(0x28); func_0027ED70(t, 0, 0x28); t->x1C = func_00286EA0(D_00347400); t->x4 = a * b; t->x0 = func_00261C20(6); func_0027ED70(t->x0, 0, t->x4); int sp[6]; t->x8 = a; t->x20 = c; t->x24 = d; sp[1] = b; t->xC = b; t->x14 = 0; t->x10 = 0; sp[2] = b; t->x18 = func_00286EA0(sp); return t; }

