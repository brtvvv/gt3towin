struct E { char p[0x10]; int v; char q[8]; };
struct R { char p[0x71]; unsigned char x; };
extern E D_004AD290[][4];
extern "C" R *func_002732C8(int, int);
extern "C" int func_002734A8(int a, int b, int v) { if (!D_004AD290[a][b].v) return 0; func_002732C8(a, b)->x = v; return 1; }

