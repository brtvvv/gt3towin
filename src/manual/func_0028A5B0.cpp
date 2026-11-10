extern int D_003098D8[]; extern char D_004B2480[];
extern "C" void func_0028A4C8(); extern "C" int func_00286EE0(int); extern "C" void func_00286EC0(int);
extern "C" char *func_0028A5B0(unsigned i) { func_0028A4C8(); func_00286EE0(D_003098D8[0]); if (i >= 32) { func_00286EC0(D_003098D8[0]); return 0; } char *r = D_004B2480 + i * 16; func_00286EC0(D_003098D8[0]); return r; }

