struct T { char p[0x38]; int x38[256]; };
extern "C" int func_00218810(int, int, int, int); extern "C" int func_00211ED8(int, int, int);
extern "C" int func_00212278(T *t, int a, int b, int c, int d) { int r = func_00218810(a, b, c, d); if (r >= 0) return !(func_00211ED8(r, t->x38[r & 0xFF], 100) * 16 < 0x800); return 0; }

