struct Blk { long d[9]; };
struct Sub { char p[0x20]; char f; };
struct T { int a, b; void *vt; int pad; Blk k; int x58, x5C, x60, x64; };
extern char D_0031D7B8[];
extern "C" T *func_001430F8(T *t, Blk *b) { Sub *u = (Sub *)((char *)t + 0x34); t->b = 0; t->a = 0; t->vt = D_0031D7B8; t->k = *b; t->x58 = -1; t->x5C = 0; t->x60 = 0; t->x64 = 0; u->f = 0; return t; }
