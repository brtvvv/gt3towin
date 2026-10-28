struct E { char p[0x20]; unsigned long v; };
struct C { char p[0x18]; E *e; };
struct S { char p[0xCC]; C *c; char q[4]; int i; };
extern "C" float func_001D0058(S *s) { E *e = &s->c->e[s->i]; int n = ((e->v >> 14) & 0x3FF) + 1; int p = 1; if (p < n) { do { p <<= 1; } while (p < 0x401 && p < n); } return (float)n / (float)p; }
