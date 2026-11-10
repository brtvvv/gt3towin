struct E { int x0, x4, x8, xC; };
extern int D_003098D8[]; extern E D_004B2480[];
extern "C" void func_0028A4C8(); extern "C" int func_00286EE0(int); extern "C" void func_00286EC0(int);
extern "C" E *func_0028A528() { func_0028A4C8(); func_00286EE0(D_003098D8[0]); for (E *e = D_004B2480; e < D_004B2480 + 32; e++) if (!e->x4) { e->x4 = 0x10000000; func_00286EC0(D_003098D8[0]); return e; } func_00286EC0(D_003098D8[0]); return 0; }

