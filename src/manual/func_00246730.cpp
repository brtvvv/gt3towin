struct G { char p[8]; char *x8; char q[4]; int x10; };
struct L { L *next; char *x4; char **x8; char **xC; int n; };
struct E { int x0, x4; };
extern G *D_003549B0; extern L *D_003549BC; extern char D_003549B8[];
extern "C" char *func_0027FDBC(char *, char *); extern "C" char *func_0027F9CC(char *, char *); extern "C" E *func_002465E8(char *); extern "C" int func_0026ACA0(char *);
extern "C" void func_00246730(int k) { char buf[0x400]; char *base = D_003549B0->x8 + D_003549B0->x10 * k; for (L *l = D_003549BC; l; l = l->next) { for (int i = 0; i < l->n; i++) { func_0027FDBC(buf, l->x4); func_0027F9CC(buf, D_003549B8); func_0027F9CC(buf, l->x8[i]); E *e = func_002465E8(buf); if (e && func_0026ACA0(base + e->x4)) l->xC[i] = base + e->x4; } } }

