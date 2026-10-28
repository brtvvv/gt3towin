struct E { char p[0x300]; };
extern "C" int func_00213D10(E *, int, int);
extern "C" int func_002140A0(E *e, int r) { for (int i = 0; i < 0x8400 / 0x300; i++) r = func_00213D10(&e[i], r, 0); return r; }

