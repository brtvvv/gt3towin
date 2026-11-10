struct J { J *next; int type; int x8; int a, b, c; void (*cb)(int, int); int arg; };
extern J *volatile D_00354934; extern volatile int D_00354930; extern char D_002F49E0[];
extern "C" int func_0026AD38(); extern "C" int func_002428C8(int, int, int, int, char *); extern "C" int func_0022D040(int); extern "C" int func_002429D8(int, int, int, int);
extern "C" void func_00242E38() { for (;;) { int st = func_0026AD38(); J *j = D_00354934; if (j) { D_00354934 = j->next; D_00354930--; } if (st) __asm__ volatile("ei"); if (!j) break; int r = 0; switch (j->type) { case 0: r = func_002428C8(j->a, j->b, j->c, 1, D_002F49E0); break; case 1: r = func_002429D8(j->a, func_0022D040(j->arg), j->b, j->c); break; } if (j->cb) j->cb(j->arg, r); } }

