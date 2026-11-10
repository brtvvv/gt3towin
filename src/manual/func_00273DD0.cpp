extern char D_004AD240[];
extern "C" int func_00289DA8(char *, int, int, void *, int, void *, int, int, int); extern "C" void func_002734A8(int, int, int);
struct K { char d[12]; };
struct S { int x0, x4, x8; K k; int x18, x1C; };
extern S D_004AD580;
extern "C" int func_00273DD0(int a, int b, K *k) { S *s = &D_004AD580; s->x4 = a; s->x0 = 11; s->x8 = b; s->k = *k; if (func_00289DA8(D_004AD240, 1, 0, s, 0x80, s, 0x80, 0, 0) < 0) return 0; int r = s->x1C; if (r == 1) { func_002734A8(a, b, 2); r = s->x1C; } return r; }

