struct E { int used; char p[0x1C]; }; struct S { char p[0x30]; E e[4]; };
extern "C" E *func_002682A0(S *s) { E *e = s->e; for (int i = 0; i < 4; i++, e++) { if (!e->used) { e->used = 1; return e; } } return 0; }

