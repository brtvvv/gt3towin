struct X { char p[0x28]; int h; char q[0x40]; int a; char r[0xC]; int b; };
extern "C" void func_001DB618(char *, int);
extern "C" void func_001F44E0(char *s, X *x) { *(X **)s = x; func_001DB618(s + 0xE340, x->h); if (x->b || x->a) { s[0xE341] = 0; *(short *)(s + 0xE378) = 0; } }

