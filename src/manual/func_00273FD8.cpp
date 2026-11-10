struct G { int x0, x4, x8, xC; char r[0x70]; };
extern G D_004AD580; extern char D_004AD240[];
extern "C" int func_00289DA8(void *, int, int, void *, int, void *, int, int, int);
extern "C" int func_00273FD8(int a) { G *g = &D_004AD580; g->x4 = a; D_004AD580.x0 = 20; if (func_00289DA8(D_004AD240, 1, 0, g, 0x80, g, 0x80, 0, 0) < 0) return 0; return g->x8; }

