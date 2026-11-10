struct E { int x0; int x4; };
struct M { char p[0x34]; E **x34; int x38; int x3C; int x40; int x44; int x48; int x4C; int x50; };
struct T { char p[0xC]; M m; char q[0x2A8 - 0xC - sizeof(M)]; int x2A8; };
extern "C" void func_001A3780(M *); extern "C" void func_001B1AB0(M *, int); extern "C" void func_001A3528(T *); extern "C" void func_001A3940(M *); extern "C" int func_001A3500(T *);
extern "C" int func_001A3AD8(T *t, int a) { M *m; if (!t->x2A8) { t->x2A8 = 1; m = &t->m; func_001A3780(m); } else m = &t->m; func_001B1AB0(m, a);
 if (m->x40) { func_001A3528(t); int r = m->x34[m->x3C]->x4; if (r != 1) { t->x2A8 = 0; return r; } func_001A3940(m); }
 if (m->x44) { func_001A3528(t); if (!m->x50) { t->x2A8 = 0; return 3; } func_001A3780(m); }
 if (!m->x48) { if (func_001A3500(t)) { t->x2A8 = 0; return 2; } return 0; } func_001A3528(t); return 1; }

