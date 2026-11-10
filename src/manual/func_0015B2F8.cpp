extern int D_00353258, D_0035325C; extern int D_00353260[2], D_00353268[2]; extern char D_002A9870[];
extern "C" int func_0026BCA0(char *, int, int);
extern "C" void func_0015B2F8() { if (D_00353258 && D_0035325C) { for (int i = 0; i < 2; i++) { D_00353268[i] = func_0026BCA0(D_002A9870 + (i & 1) * 0x18, 0x25800, 0x10); D_00353260[i] = 0; } } }

