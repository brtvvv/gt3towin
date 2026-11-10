struct R { int x0, x4; };
struct S { char p[0x34]; R **x34; int x38, x3C, x40, x44, x48; };
struct M { char p[0x1F0]; int x1F0; };
struct T { char p[0xC]; M m; char q[0x2C8 - 0xC - sizeof(M)]; S s; };
extern "C" void func_001B0118(M *); extern "C" void func_001B1AB0(S *); extern "C" void func_001A3528(T *); extern "C" void func_001B0080(M *); extern "C" int func_001A3500(T *);
extern "C" int func_001A4198(T *t) { M *m = &t->m; if (m->x1F0) { func_001B0118(m); return 1; } S *s = &t->s; func_001B1AB0(s); if (s->x40) { func_001A3528(t); if (s->x3C == 2) func_001B0080(m); return s->x34[s->x3C]->x4; } if (s->x44) { func_001A3528(t); return 3; } if (!s->x48) return func_001A3500(t) ? 2 : 0; func_001A3528(t); return 1; }

