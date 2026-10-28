struct E { char p[0x14]; };
extern "C" int func_00217428(E *, int);
extern "C" int func_00217AB8(E *e, int r) { for (int i = 0; i < 0xB40 / 0x14; i++) r = func_00217428(&e[i], r); return r; }
