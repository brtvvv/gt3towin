struct E { int x0, x4; };
struct S { char p[0x34]; E **x34; char q[4]; int x3C, x40, x44, x48; char r[4]; int x50; };
struct T { char p[0xC]; S s; char q[0x2CC - 0xC - sizeof(S)]; int x2CC; };
struct G { char p[0x84]; char x84[4]; };
extern "C" void func_001A46A0(S *); extern "C" int func_0017A080(char *, int, int, int); extern "C" void func_001A48D8(S *, int); extern "C" void func_001B1AB0(S *, int); extern "C" void func_001A3528(T *); extern "C" void func_001A48A0(S *); extern "C" int func_001A3500(T *);
extern "C" int func_001A4A80(T *t, int a, G *g) { S *s; if (!t->x2CC) { t->x2CC = 1; s = &t->s; func_001A46A0(s); } else s = &t->s; if (g && func_0017A080(g->x84, 0x13, 0, 1)) func_001A48D8(s, 0); func_001B1AB0(s, a);
 if (s->x40) { func_001A3528(t); int v = s->x34[s->x3C]->x4; if (v != 1) { t->x2CC = 0; return v; } func_001A48A0(s); }
 if (s->x44) { func_001A3528(t); if (!s->x50) { t->x2CC = 0; return 3; } func_001A46A0(s); }
 if (!s->x48) { if (func_001A3500(t)) { t->x2CC = 0; return 2; } return 0; } func_001A3528(t); return 1; }

