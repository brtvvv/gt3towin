struct S { long x0, x8; }; struct T { char p[0xA4]; float xA4; char q[0x100 - 0xA8]; float x100; S *x104; };
extern int D_003536B0; extern char D_00315280[];
extern "C" void func_0023C8E8(char *, long); extern "C" void func_0026D950(char *, char *, int, char *); extern "C" void func_001BAE10(T *, char *); extern "C" void func_001BB688(T *);
extern "C" void func_0012A220(T *t) { char a[0x40]; char b[0x40]; func_0023C8E8(a, t->x104->x0 - t->x104->x8); func_0026D950(b, D_00315280, D_003536B0, a); func_001BAE10(t, b); t->xA4 = t->x100; func_001BB688(t); }

