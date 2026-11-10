struct T { int x0, x4; };
extern char D_00343E68[], D_00343E80[];
extern "C" void func_0026D5B8(int); extern "C" int func_0026D660(int, int); extern "C" int func_0023A4B0(T *, char *, int, int);
extern "C" int func_0023A4F8(T *t) { if (t->x0) func_0026D5B8(t->x0); int m = func_0026D660(0x40, 0x2000); if (!(t->x0 = func_0023A4B0(t, D_00343E68, m, 0x2000))) return 0; if (t->x4) func_0026D5B8(t->x4); m = func_0026D660(0x40, 0x3000); return (t->x4 = func_0023A4B0(t, D_00343E80, m, 0x3000)) != 0; }

