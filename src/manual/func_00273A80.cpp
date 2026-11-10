extern char D_004AD240[];
extern "C" int func_00289DA8(char *, int, int, void *, int, void *, int, int, int); extern "C" void func_002734A8(int, int, int);
struct S { int x0, x4, x8; unsigned char c[6]; short p; int x14; };
extern S D_004AD580;
extern "C" int func_00273A80(int a, int b, unsigned char *c) { S *s = &D_004AD580; s->x0 = 8; s->x4 = a; s->x8 = b; for (int i = 0; i < 6; i++) s->c[i] = c[i]; if (func_00289DA8(D_004AD240, 1, 0, s, 0x80, s, 0x80, 0, 0) < 0) return 0; int r = s->x14; if (r == 1) { func_002734A8(a, b, 2); r = s->x14; } return r; }

