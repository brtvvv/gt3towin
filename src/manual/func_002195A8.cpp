struct X { char q[0x64]; int a, b; };
struct G { char p[0x2FF38]; X x; };
extern "C" G *func_00219680(void);
extern "C" void func_00251E38(int, int);
extern "C" void func_002195A8(void) { X *p = &func_00219680()->x; int a = p->a; X *q = &func_00219680()->x; func_00251E38(a * 2, q->b * 2); }

