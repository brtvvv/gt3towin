struct E { char p[0x300]; };
extern "C" int func_00213290(E *, int, int);
extern "C" int func_00213660(E *e, int r) { for (int i = 0; i < 0x900 / 0x300; i++) r = func_00213290(&e[i], r, 0); return r; }
