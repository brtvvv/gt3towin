extern int D_00353258, D_0035325C; extern int D_00353260[2], D_00353268[2]; extern char D_002A9870[];
extern "C" void func_0026BFC0(char *, int);
extern "C" void func_0015B398() { if (D_00353258 && D_0035325C) { for (int i = 0; i < 2; i++) { func_0026BFC0(D_002A9870 + (i & 1) * 0x18, D_00353268[i]); D_00353268[i] = 0; D_00353260[i] = 0; } } }

