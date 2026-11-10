struct S { unsigned short x0; unsigned char x2, x3; char p[0x1294 - 4]; float x1294; char q[4]; unsigned short x129C; };
extern char D_002F7008[]; extern float D_00351AB0; extern "C" float func_00246B60(char *, float);
extern "C" int func_001DA590(S *s, int *o, int c, int f) { float r; int n = s->x0; if (f && n) { *o = s->x3 * 100; r = func_00246B60(D_002F7008, n) + D_00351AB0; } else { *o = s->x129C; r = func_00246B60(D_002F7008, s->x1294); } return (int)r; }

