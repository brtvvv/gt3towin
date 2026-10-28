struct E { char p[0x300]; };
extern "C" int func_002132C0(E *, int);
extern "C" int func_002136B8(E *e, int r) { for (int i = 0; i < 0x900 / 0x300; i++) r = func_002132C0(&e[i], r); return r; }
