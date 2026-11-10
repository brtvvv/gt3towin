struct E { char p[0x20]; unsigned long x20; };
struct C { char p[0x18]; E *x18; };
struct T { char p[0x38]; float x38, x3C; char q[0xCC - 0x40]; C *xCC; int xD0, xD4; };
extern "C" void func_001D01D8(T *t) { unsigned long v = t->xCC->x18[t->xD4].x20; int b = ((v >> 14) & 0x3FF) + 1; int a = ((v >> 34) & 0x3FF) + 1; t->x38 = b; t->x3C = a; }

