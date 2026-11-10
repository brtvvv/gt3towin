struct S { char p4[4]; unsigned short x4; unsigned char x6, x7; char p[0x1298 - 8]; float x1298; char q[2]; unsigned short x129E; };
extern char D_002F7008[]; extern float D_00351AB4; extern "C" float func_00246B60(char *, float); extern "C" float func_00246BB8(char *, float);
extern "C" int func_001DA608(S *s, int *o, int c, int f) { float r; int n = s->x4; if (f && n) { *o = s->x7 * 100; r = func_00246BB8(D_002F7008, n) + D_00351AB4; } else { *o = s->x129E; r = func_00246B60(D_002F7008, s->x1298 * 10.0f); } return (int)r; }

