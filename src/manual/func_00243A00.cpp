struct A { int a, b, c; };
extern char D_002F5260[]; extern "C" int func_0026AD38(); extern "C" void func_00243B30(char *, A *);
extern "C" void func_00243A00(int a, int b, int c) { int r = func_0026AD38(); A x; x.a = a; x.b = b; x.c = c; func_00243B30(D_002F5260, &x); if (r) __asm__ volatile("ei"); }

