struct G { char p[0x18]; long x18; };
extern char D_00311660[], D_003116B8[], D_00311628[];
extern "C" G *func_00219680(); extern "C" char *func_00219F60(G *); extern "C" void func_001C5E88(int); extern "C" int func_00239098(char *, int); extern "C" int func_00238C20(char *, int); extern "C" int func_00238C98(char *, int);
extern "C" char *func_0011C0C8() { char *x = func_00219F60(func_00219680()); if (!x) { func_001C5E88(4); return D_00311660; } char *p = x + 0x10; int sum = 0; for (int i = 0x3A; i < 0x41; i++) { if (func_00239098(p, i)) { if (!func_00238C20(p, i)) sum += func_00238C98(p, i); } } if (!sum) { func_001C5E88(4); return D_003116B8; } if (func_00219680()->x18 < sum) { func_001C5E88(4); return D_00311628; } return 0; }

