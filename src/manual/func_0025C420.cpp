struct T { int x0; char m[0x28]; int x2C, x30, x34; };
extern "C" int func_0025C3C0(); extern "C" void func_0026ADD8(); extern "C" int func_0025C1E8(char *, int, int, int, int, int, int, void *, T *);
extern "C" int func_0025C420(T *t, int a, int b, int c, int d) { t->x34 = 1; while (func_0025C1E8(t->m, a, b, t->x2C, t->x30, c, d, (void *)func_0025C3C0, t)) func_0026ADD8(); return 0; }

