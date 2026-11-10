struct E { char p[0x20]; unsigned long x20; };
struct S { char p[0x18]; E *x18; };
struct T { char p[0xCC]; S *xCC; int pD0; int xD4; };
extern "C" float func_001D00E8(T *t) { int n = ((t->xCC->x18[t->xD4].x20 >> 34) & 0x3FF) + 1; int p = 1; if (p < n) do p <<= 1; while (p < 0x401 && p < n); return (float)n / (float)p; }

