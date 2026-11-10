struct X { char p[0x22C]; int x22C; };
extern "C" X *func_001BF0A0(void *);
extern "C" int func_001BFAE0(void **a, void **b) { void *pb = *b; X *x = func_001BF0A0(*a); X *y = func_001BF0A0(pb); int xa = x->x22C, yb = y->x22C; if (yb < xa) return -1; return xa < yb; }

