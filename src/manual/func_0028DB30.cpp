extern int D_003098E4[]; extern int D_004B27C0[], D_004B2740[]; extern char D_004B2700[];
extern "C" int func_00289DA8(void *, int, int, void *, int, void *, int, int, int);
extern "C" int func_0028DB30(int a) { if (D_003098E4[0] < 0) return 0; D_004B27C0[0] = a; if (func_00289DA8(D_004B2700, 2, 0, D_004B27C0, 4, D_004B2740, 4, 0, 0) < 0) return -1; return D_004B2740[0]; }

