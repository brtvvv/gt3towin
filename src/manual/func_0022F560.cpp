struct S { char p[8]; int h; char q[0xC0]; int k; };
extern "C" int func_0022DCD0(S *), func_0022E890(int), func_0022DCD8(void), func_0022E170(void);
extern "C" void func_002312D8(int, int);
extern "C" int func_0022F560(S *s) { if (!func_0022DCD0(s)) return 0; if (!func_0022E890(s->h)) return 0; func_002312D8(s->k, func_0022DCD8()); return func_0022E170(); }

