struct S { unsigned char x0, x1; short p2; short x4; };
struct T { char p[0x38]; unsigned char x38[1][4]; };
extern unsigned char D_00343068[];
extern "C" int func_00218810(int, int, int, int);
extern "C" void func_00211DB0(T *t, S *s, int a, int b, int c) { if (s->x4 == 0) { int i = func_00218810(a, b, c, 0); if (i >= 0) { int v = D_00343068[t->x38[i][0]]; s->x0 |= 1; s->x1 = 2; s->x4 = (0x100 - v * 2) << 4; } } }

