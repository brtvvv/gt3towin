struct P { int a, b; };
extern P D_003097F8[]; extern char D_00309098[], D_003097D8[];
extern "C" void func_00287AE8(int, int); extern "C" void func_00287AF8(int, char *, int); extern "C" void func_00287120(int); extern "C" int func_00287B40(int);
extern "C" void func_00287B50() { if (*(volatile int *)0x10001810 & 0x100) return; P *p = D_003097F8; func_00287AE8(p[0].a, p[0].b); func_00287AF8(0x80076000, D_00309098, 0x740); func_00287AF8(0x82000, D_003097D8, 0x20); func_00287120(0); func_00287120(2); func_00287AE8(p[1].a, p[1].b); for (unsigned i = 2; i < 8; i++) func_00287AE8(p[i].a, func_00287B40(p[i].a)); }

