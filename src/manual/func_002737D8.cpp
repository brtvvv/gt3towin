struct E { char p[0x10]; int x10; char q[8]; };
struct R { E e[4]; };
struct S { char p[0x50]; unsigned short h[10]; unsigned char x64, x65, x66, x67, x68, x69; char r[0x71 - 0x6A]; unsigned char x71, x72; };
extern R D_004AD290[]; extern "C" S *func_002732C8(int, int);
extern "C" int func_002737D8(int a, int b, int k, int c) { if (!D_004AD290[a].e[b].x10) return 0; S *s = func_002732C8(a, b); if (s->x72 != 1) return 0; if (s->x71 == 2) return 0;
 switch (k) { case 1: if (s->x65 == 0xF3) return 0; return s->x65 >> 4; case 2: if (s->x64 == 1) return 0; return s->h[s->x69]; case 3: if (s->x64 == 1) return 0; return s->x69; case 4: if (s->x64 == 1) return 0; if (c == -1) return s->x68; if (c < s->x68) return s->h[c]; return 0; } return 0; }

