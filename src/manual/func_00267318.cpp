struct R { int d[0x1C]; };
struct E { char p[0x168]; R r; };
struct G { char p[0x38]; int x38; char q[0x338 - 0x3C]; int sem; };
extern G D_004AB240[]; extern "C" unsigned func_00268240(int, int); extern "C" int func_00286EE0(int); extern "C" void func_00286EC0(int);
extern "C" int func_00267318(int a, R *o) { G *g = D_004AB240; unsigned k = func_00268240(g->x38, a); if (k >= 4) return 3; func_00286EE0(g->sem); *o = ((E *)((char *)g + k * 0x70))->r; func_00286EC0(g->sem); return 0; }

