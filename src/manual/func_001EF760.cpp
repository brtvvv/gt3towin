struct S { char p[0xBAF8]; int a[4][8]; short h[4]; char c1[4]; char c2[4]; char q[0x27F8]; int k; };
extern "C" void func_001EF760(S *s) { s->k = 0; for (int i = 0; i < 4; i++) { for (int j = 0; j < 8; j++) s->a[i][j] = 0x157529FF; s->h[i] = -1; s->c1[i] = 0; s->c2[i] = 0; } }
