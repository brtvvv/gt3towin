struct E { char p[0x14]; };
extern "C" int func_002173D8(E *, int, int);
extern "C" int func_00217A60(E *e, int r) { for (int i = 0; i < 0xB40 / 0x14; i++) r = func_002173D8(&e[i], r, 0); return r; }
