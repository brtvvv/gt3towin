struct M { M(); int a; void *b; int c; int d; };
extern char D_0032FAC8[];
extern "C" void func_001910D8(M *, int);
extern "C" void func_001ED948(int *p, int a, int c) { int v = *p; M m; m.a = a; m.c = c; m.b = D_0032FAC8; func_001910D8(&m, v); }

