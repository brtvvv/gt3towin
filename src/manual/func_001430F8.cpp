struct L { long d[9]; };
struct T { int x0, x4; void *x8; int xC; L x10; int x58, x5C, x60, x64; };
extern char D_0031D7B8[];
extern "C" T *func_001430F8(T *t, L *l) { t->x4 = 0; t->x0 = 0; t->x8 = D_0031D7B8; char *q = (char *)t + 0x34; t->x10 = *l; t->x58 = -1; t->x5C = 0; t->x60 = 0; t->x64 = 0; q[0x20] = 0; return t; }

