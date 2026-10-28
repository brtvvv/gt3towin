struct E { char p[0x6C]; };
struct Gp { char p[0xC]; E e[4]; };
struct G { char p[0x1418]; Gp g[8]; };
extern G *D_003548F8;
extern "C" int func_0023FE20(int), func_0023FF38(int);
extern "C" void func_002416C0(void), func_002416E0(void), func_0023F538(E *);
extern "C" int func_0023FEA8(int i) { if (!func_0023FE20(i)) return 0; func_002416C0(); func_0023F538(&D_003548F8->g[i / 4].e[i % 4]); int r = func_0023FF38(i); func_002416E0(); return r; }
