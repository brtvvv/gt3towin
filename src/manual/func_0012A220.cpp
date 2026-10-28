struct S { char p[0xA4]; float a4; char q[0x58]; float f100; long *t; };
extern int D_003536B0;
extern char D_00315280[];
extern "C" void func_0023C8E8(char *, long);
extern "C" void func_0026D950(char *, char *, int, char *);
extern "C" void func_001BAE10(S *, char *), func_001BB688(S *);
extern "C" void func_0012A220(S *s) { char a[0x40], b[0x40]; func_0023C8E8(a, s->t[0] - s->t[1]); func_0026D950(b, D_00315280, D_003536B0, a); func_001BAE10(s, b); s->a4 = s->f100; func_001BB688(s); }
