struct C { char p[0x24]; int x24; char q[0x28 - 0x28]; };
struct W { char d[4]; };
extern int D_003098E8[]; extern C D_004B2B00[]; extern W D_004B2900[], D_004B2B28[];
extern "C" int func_00289BD8(C *, unsigned, int); extern "C" int func_00289DA8(C *, int, int, int, int, void *, int, int, int);
extern "C" int func_0028DC98() { if (D_003098E8[0] < 0) { for (;;) { if (func_00289BD8(D_004B2B00, 0x80000006u, 0) < 0) return -1; if (D_004B2B00[0].x24) { D_003098E8[0] = 0; if (func_00289DA8(D_004B2B00, 0xFF, 0, 0, 0, D_004B2900, 4, 0, 0) < 0) return 0xFFFEFFFF; D_004B2B28[0] = D_004B2900[0]; return 0; } int i = 0x100000; while (i--); } } return 0; }

