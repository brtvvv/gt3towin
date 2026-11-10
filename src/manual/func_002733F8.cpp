struct E { char p[0x10]; int x10; char q[8]; };
struct R { E e[4]; };
extern R D_004AD290[];
extern "C" unsigned char *func_002732C8(int, int);
extern "C" int func_002733F8(int a, int b) { if (!D_004AD290[a].e[b].x10) return 0x63; unsigned char *p = func_002732C8(a, b); if (p[0x70] != 6) return p[0x70]; if (p[0x71] == 2) return 5; return p[0x70]; }

