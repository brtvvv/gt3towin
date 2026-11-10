struct S { char p[0x4FC]; float v; };
struct T { char p[0xEC4]; float xEC4; char q[0xF84 - 0xEC8]; S s; char r[0x169C - 0xF84 - sizeof(S)]; float k; };
extern "C" float func_001EC9F0(T *t, float x) { S *s = &t->s; float a = x + t->xEC4; return (double)(t->k * a) + (double)s->v * (1.0 - (double)a); }

