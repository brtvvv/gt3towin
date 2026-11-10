typedef struct N { struct N *next; unsigned short x4; char p[2]; int x8, xC, x10, x14; char q[4]; unsigned short x1C; } N;
typedef struct L { N *head; char p[2]; unsigned short x6; char q[4]; unsigned short xC; } L;
extern int D_00354B48, D_00354B4C; extern L D_00300FE8;
void func_0026A110(N *); int func_0026AC08(unsigned short *); void func_00269A98(N *); void func_0026A560();
void func_0026A428() { N *n; if (!D_00354B48 || !D_00354B4C) return; for (n = D_00300FE8.head; n; n = n->next) { n->x14 = 0; while (n->xC > 0) { n->xC -= n->x8; n->x14++; } n->xC += n->x10; func_0026A110(n); if (n->x1C) { n->x4 += func_0026AC08(&n->x1C); func_00269A98(n); } }
 if (D_00300FE8.xC) { D_00300FE8.x6 += func_0026AC08(&D_00300FE8.xC); for (n = D_00300FE8.head; n; n = n->next) func_00269A98(n); } func_0026A560(); }

