struct H { char p[0x64]; int x64; char q[4]; };
struct G { char p[0xC]; H h[4]; };
struct W { char p[0x1418]; G g[1]; };
extern W *D_003548F8; extern "C" int func_0026AD38();
extern "C" int func_0023FF38(int n) { int r = func_0026AD38(); H *h = &D_003548F8->g[n / 4].h[n % 4]; int v = h->x64; h->x64 = 0; if (r) __asm__ volatile("ei"); return v; }

