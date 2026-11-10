struct R { int d[14]; };
struct E { char p[0x88]; R r; };
struct G { char p[0x38]; int x38; char q[0x328 - 0x3C]; int st[4]; int sem; };
extern G D_004AB240[]; extern "C" unsigned func_00268240(int, int); extern "C" int func_00286EF0(int); extern "C" void func_00286EC0(int);
extern "C" int func_002670D8(int a, R *o) { G *g = D_004AB240; unsigned k = func_00268240(g->x38, a); if (k >= 4) return 3; int r = 0; if (func_00286EF0(g->sem) == g->sem) { if (g->st[k] != 1) r = 2; else *o = ((E *)((char *)g + k * 0x38))->r; func_00286EC0(g->sem); } else r = 5; return r; }

