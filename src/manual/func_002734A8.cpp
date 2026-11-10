struct E { char p[0x10]; int x10; char q[8]; };
struct R { E e[4]; };
extern R D_004AD290[];
extern "C" char *func_002732C8(int, int);
extern "C" int func_002734A8(int a, int b, int c) { if (!D_004AD290[a].e[b].x10) return 0; func_002732C8(a, b)[0x71] = c; return 1; }

