struct N { int x0; N *x4; int x8; char *xC; };
extern N *D_003548F0; extern "C" int func_0026AD38(); extern "C" int func_0027FC78(char *, char *);
extern "C" N *func_0023EDB0(char *name) { int r = func_0026AD38(); N *n = D_003548F0; while (n && func_0027FC78(n->xC, name)) n = n->x4; if (r) __asm__ volatile("ei"); return n; }

