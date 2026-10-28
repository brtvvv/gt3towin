struct U { char p[0x4FC]; float x; };
struct S { char p[0xEC4]; float off; char q[0xBC]; U u; char r[0x218]; float k; };
extern "C" float func_001EC9F0(S *s, float x) { U *u = &s->u; float t = x + s->off; return (double)(s->k * t) + (double)u->x * (1.0 - (double)t); }
