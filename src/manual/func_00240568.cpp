struct W { char p[0x140C]; int x140C; };
extern char *D_003548F8;
extern "C" void func_00286EE0(int); extern "C" int func_0023FE20(int); extern "C" int func_00268780(int, int, int); extern "C" int func_002402B0(int, int); extern "C" void func_0023F3C0(char *, int, int); extern "C" void func_0026AE48(int);
extern "C" int func_00240568(int k, int a) { int ret = 1; 
 if (func_0023FE20(k)) { int q = k / 4; int m = k - q * 4; ret = 9; int h = func_00268780(q, m, a); ret = func_002402B0(h ? ret : 0, h); int o1 = q * 0x1BC + 0x1418; int o2 = m * 0x6C + 0xC;
  func_0023F3C0(D_003548F8 + o1 + o2, h, ret); char *e = D_003548F8 + o1 + o2; *(int *)(e + 0x54) = 1; *e = 0; }
 return ret; }

