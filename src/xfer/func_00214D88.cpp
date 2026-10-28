struct E { char p[0x2A4]; };
extern "C" int func_00214870(E *, int);
extern "C" int func_00214D88(E *e, int r) { for (int i = 0; i < 0x1A68 / 0x2A4; i++) r = func_00214870(&e[i], r); return r; }
