struct R { int a, b, c; };
struct W { char p[0x1848]; int x1848, x184C; R *x1850; };
extern W *D_003548F8; extern "C" int func_0026AD38(); extern "C" int func_00286D90(); extern "C" void func_00286DC0();
extern "C" int func_00241A30() { W *w = D_003548F8; int r = func_0026AD38(); int need; R s; if (w->x1848) { s.a = (int)w->x1850; s.b = func_00286D90(); w->x1850 = (R *)&s; need = 1; } else { need = 0; s.c = w->x184C; } if (r) __asm__ volatile("ei"); if (need) func_00286DC0(); return s.c; }

