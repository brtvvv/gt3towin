extern "C" void func_0017D3B8(char *), func_001AF478(char *, int);
extern "C" int func_0022F028(char *), func_0017D078(char *);
extern "C" int func_0017E330(char *s) { if (*(int *)(s + 0x97C0)) { func_0017D3B8(s); return 0; } if (func_0022F028(s + 0xC708) & 0x20000000) return 0; func_001AF478(s + 0xBCD0, *(int *)(s + 4)); return func_0017D078(s); }
