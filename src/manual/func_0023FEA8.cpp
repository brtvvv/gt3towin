struct H { char d[0x6C]; }; struct G { char p[0xC]; H h[4]; char q[0x1BC - 0xC - 4 * 0x6C]; };
struct W { char p[0x1418]; G g[1]; };
extern W *D_003548F8;
extern "C" int func_0023FE20(int); extern "C" void func_002416C0(); extern "C" void func_0023F538(H *); extern "C" int func_0023FF38(int); extern "C" void func_002416E0();
extern "C" int func_0023FEA8(int n) { if (!func_0023FE20(n)) return 0; func_002416C0(); func_0023F538(&D_003548F8->g[n / 4].h[n % 4]); int r = func_0023FF38(n); func_002416E0(); return r; }

