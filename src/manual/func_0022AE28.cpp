struct R { char p[0x2C]; int x2C; };
struct T { R *x0; char x4[0x88]; unsigned char x8C, x8D, x8E; char pad; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); };
extern char D_002F49E0[];
extern "C" R *func_002428C8(int, int, int, int, char *); extern "C" void func_0022A8A0(R *); extern "C" void func_00225950(int); extern "C" void func_0022AB90(R *, char *);
extern "C" void func_0022AE28(T *t, int a, int b, int c, int d) { t->f3(); t->x8E = d; if (b) { func_002428C8(a, b, c, 1, D_002F49E0); t->x0 = (R *)b; } else t->x0 = func_002428C8(a, 0, 0, 1, D_002F49E0); func_0022A8A0(t->x0); func_00225950(t->x0->x2C); func_0022AB90(t->x0, t->x4); }

