struct X { char p[0x5D8]; int k; };
struct W { char p[0x18]; long t; char q[0x307A8]; X x; };
extern "C" W *func_00219680(void);
extern "C" char *func_00219F60(W *);
extern "C" void func_00238A88(char *, int);
extern "C" int func_00238C98(char *, int);
extern "C" void func_001266F8(void) { char *p = func_00219F60(func_00219680()); X *x = &func_00219680()->x; char *o = p + 0x10; int k = x->k; func_00238A88(o, k); W *g = func_00219680(); g->t += -func_00238C98(o, k); }
