struct E { char x0; char p[0x17]; signed char *x18; char q[0x2C - 0x1C]; };
struct A { char p[0x12]; unsigned char x12; };
extern E D_00300800[]; extern "C" int func_0026AD38(); extern "C" int func_0026A9D0(int); extern "C" void func_0026AAC8(int, A *);
extern "C" void func_002697E0(signed char *o, A *a) { int r = func_0026AD38(); int k = func_0026A9D0(a->x12); if (o) *o = k; if (k >= 0) { E *e = &D_00300800[k]; e->x0 = 1; e->x18 = o; func_0026AAC8(k, a); } if (r) __asm__ volatile("ei"); }

