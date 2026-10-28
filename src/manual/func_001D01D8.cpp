struct E { char p[0x20]; unsigned long v; };
struct T { char p[0x18]; E *e; };
struct S { char p[0x38]; float b; float a; char q[0x8C]; T *t; char r[4]; int i; };
extern "C" void func_001D01D8(S *s) { unsigned long v = s->t->e[s->i].v; s->b = (float)(int)(((v >> 14) & 0x3FF) + 1); s->a = (float)(int)(((v >> 34) & 0x3FF) + 1); }

