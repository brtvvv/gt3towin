struct E { char p[0x2A4]; };
extern "C" int func_00214820(E *, int, int);
extern "C" int func_00214D28(E *e, int r, int x) { for (int i = 0; i < 0x1A68 / 0x2A4; i++) r = func_00214820(&e[i], r, x); return r; }

