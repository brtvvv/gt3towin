struct S { char p[0xE4]; unsigned short xE4; char q[0xF2 - 0xE4 - 2]; unsigned short xF2; char r[0x100 - 0xF2 - 2]; unsigned short x100; };
struct G { int x0, x4, x8; };
extern G D_002ED3B8; extern unsigned D_00354970;
extern "C" S *func_00232658(G *, int, int); extern "C" int func_002327C0(int, int);
extern "C" int func_0023B0D0(int a) { S *s = func_00232658(&D_002ED3B8, 30, a); if (!s) return 0; int k; switch (D_00354970) { case 0: default: k = s->xF2; break; case 2: k = s->x100; break; case 1: case 3: case 4: case 5: case 6: k = s->xE4; break; } return func_002327C0(D_002ED3B8.x8, k); }

