struct C { void (*f)(int, int); int a, b; };
struct Q { char p[0xC0]; int n; };
extern Q D_002F5260[]; extern "C" int func_0026AD38(); extern "C" void func_00243B80(C *, Q *);
extern "C" void func_00243A70() { int r = func_0026AD38(); int n = D_002F5260[0].n; C c; if (n > 0) { int i = n; do { func_00243B80(&c, D_002F5260); c.f(c.a, c.b); } while (--i); } if (r) __asm__ volatile("ei"); }

