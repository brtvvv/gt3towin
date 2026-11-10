struct S { char p[0x2E4]; int x2E4; char q[0xE44 - 0x2E8]; int xE44; };
struct U { char p[0xB4C]; int xB4C; };
struct T { char p[0x104]; U *x104; char q[0x174 - 0x108]; S *x174; };
extern char D_003257D8[];
extern "C" int func_001D8C60(int, char *); extern "C" void func_001C5E88(int); extern "C" void func_001B8AD8(U *, int);
extern "C" int func_00171CD8(T *t, int a, int k) { S *s = t->x174; if (k != 2) return 1; if (func_001D8C60(a, D_003257D8)) { s->xE44 = 0; func_001C5E88(1); U *u = t->x104; s->x2E4 = 0; u->xB4C = 1; func_001B8AD8(u, 0); return 0; } return 1; }

