extern int D_00305A68[]; extern char D_00306C10[], D_00305AC0[];
extern "C" int func_00272270(int); extern "C" int func_00289DA8(char *, int, int, int, int, char *, int, int, int); extern "C" void func_00286EC0(int);
extern "C" int func_002723E0() { if (!func_00272270(2)) return 0; char *b = D_00305AC0; if (func_00289DA8(D_00306C10, 0xE, 0, 0, 0, b, 4, 0, 0) < 0) { func_00286EC0(D_00305A68[0]); return 0; } int r = *(int *)((int)b | 0x20000000); func_00286EC0(D_00305A68[0]); return r; }

