struct T { char p[0x1C]; char *x1C; char q[0x104 - 0x20]; char *x104; int x108, x10C; char r[4]; char x114[0x1EC - 0x114]; char x1EC[4]; };
extern char D_00315758[], D_002EBE28[]; extern int D_00352CAC, D_00352CA8, D_00354678;
extern "C" int func_00267088(int); extern "C" void func_00218AE8(char *, int, int, int); extern "C" void func_0022FBE8(char *, char *); extern "C" void func_001BAB98(void *, int); extern "C" void func_0022EBC8(char *, int); extern "C" void func_001C0360(T *);
extern "C" void func_0012A9E0(T *t, int fl) { t->x1C = D_00315758; char *s = t->x104 + 0x638; if (!--D_00352CAC) { int v = func_00267088(t->x108 != 0); func_00218AE8(s, t->x108, t->x10C, D_00352CA8 == v); } func_0022FBE8(D_002EBE28, t->x114); D_00354678 = 0; if (!D_00352CAC) D_00354678 = 1; func_001BAB98(t->x1EC, 2); func_0022EBC8(t->x114, 2); func_001BAB98(t, 0); if (fl & 1) func_001C0360(t); }

