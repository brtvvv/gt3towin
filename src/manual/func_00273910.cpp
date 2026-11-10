struct S { int x0, x4, x8, xC, x10, x14; };
extern S D_004AD580; extern char D_004AD240[];
extern "C" int func_00289DA8(char *, int, int, S *, int, S *, int, int, int); extern "C" void func_002734A8(int, int, int);
extern "C" int func_00273910(int a, int b, int c, int d) { S *s = &D_004AD580; s->xC = c; s->x10 = d; s->x0 = 6; s->x4 = a; s->x8 = b; if (func_00289DA8(D_004AD240, 1, 0, s, 0x80, s, 0x80, 0, 0) < 0) return 0; int r = s->x14; if (r == 1) { func_002734A8(a, b, 2); r = s->x14; } return r; }

