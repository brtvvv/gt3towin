extern int D_003098E4[], D_004B2780[], D_004B2740[];
extern char D_004B2700[];
extern "C" int func_00289DA8(char *, int, int, int *, int, int *, int, int, int);
extern "C" int func_0028DAC0(int x) { if (D_003098E4[0] < 0) return 0; D_004B2780[0] = x; if (func_00289DA8(D_004B2700, 1, 0, D_004B2780, 4, D_004B2740, 4, 0, 0) < 0) return 0; return D_004B2740[0]; }
