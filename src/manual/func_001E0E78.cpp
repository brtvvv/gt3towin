struct S { char p[0x34]; unsigned char x34, x35, x36, x37, x38, x39, x3A, x3B, x3C, x3D, x3E; };
extern S D_002D5BE8[]; extern char D_0049EA20[];
extern float D_00351C6C, D_00351C70, D_00351C74, D_00351C78, D_00351C7C;
extern float D_003542CC, D_003542D0, D_003542D4, D_003542D8, D_003542DC, D_003542E0, D_003542E4;
extern "C" void func_001DA0E8(char *, int, int);
extern "C" void func_001E0E78() { S *s = D_002D5BE8; float k = D_00351C6C;
 D_003542D0 = s->x34 * k; D_003542CC = s->x38 * D_00351C70; func_001DA0E8(D_0049EA20, s->x35, s->x36);
 D_003542D4 = s->x3A * k * (1.0f / 4096.0f); D_003542DC = s->x3C * D_00351C74;
 if (!s->x3B) D_003542D8 = 0.0f; else D_003542D8 = s->x3B * k / D_003542DC;
 D_003542E4 = s->x3E * D_00351C78; if (!s->x3D) D_003542E0 = 0.0f; else D_003542E0 = s->x3D * D_00351C7C / D_003542E4; }

