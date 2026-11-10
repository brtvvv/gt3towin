struct S { char p[0x24]; int x24, x28; char q[0x38 - 0x2C]; int x38, x3C; int x40; };
extern char D_003473E8[];
extern "C" void func_0027ED70(void *, int, int); extern "C" int func_00261C20(int); extern "C" void func_00287120(int); extern "C" int func_00286EA0(char *);
extern "C" S *func_00260A00(int a) { S *s = (S *)0x70002300; func_0027ED70((void *)0x70002300, 0, 0x44); s->x3C = a; s->x28 = (func_00261C20(1) & 0x0FFFFFFF) | 0x20000000; s->x24 = func_00261C20(2); func_00287120(0); s->x38 = func_00286EA0(D_003473E8); return (S *)0x70002300; }

