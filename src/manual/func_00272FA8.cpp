extern int D_004AD580[], D_003074C0[];
extern char D_004AD240[];
extern "C" int func_00289DA8(char *, int, int, int *, int, int *, int, int, int);
extern "C" int func_00272FA8(void) { int *b = D_004AD580; D_004AD580[0] = 15; if (func_00289DA8(D_004AD240, 1, 0, b, 0x80, b, 0x80, 0, 0) < 0) return 0; int r = b[3]; if (r == 1) D_003074C0[0] = 0; return r; }
