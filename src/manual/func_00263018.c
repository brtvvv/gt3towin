extern int D_00354B08, D_00354B0C;
void func_00263E80(int, int, int, int, int, int); void func_00263108(int, int, int, int, int, int, int); void func_00263848(int, int, int, int, int, int, int);
void func_00263018(int s, int x, int y, int w, int h, int k) { func_00263E80(D_00354B08, s, x, y, w, h); func_00263108(D_00354B0C, D_00354B08, x, y, w, h, k); w >>= 1; h >>= 1; x >>= 1; y >>= 1; func_00263848(D_00354B0C + 0x100, D_00354B08 + 0x400, x, y, w, h, k); func_00263848(D_00354B0C + 0x140, D_00354B08 + 0x500, x, y, w, h, k); }

