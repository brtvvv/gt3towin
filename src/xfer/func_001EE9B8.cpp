struct M { M(); int a, b, c, d; };
extern "C" void func_001910D8(M *, int);
extern "C" void func_001EE9B8(int *p, int x) { int v = *p; M m; m.a = x; m.c = 6; func_001910D8(&m, v); }

