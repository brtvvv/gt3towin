struct E { char p[0x300]; };
extern "C" int func_00213D40(E *, int);
extern "C" int func_002140F8(E *e, int r) { for (int i = 0; i < 0x8400 / 0x300; i++) r = func_00213D40(&e[i], r); return r; }

