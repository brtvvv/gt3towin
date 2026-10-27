struct E { int x; char p[0x1F4]; }; struct S { char p[0x480]; E e[8]; };
extern "C" int func_0018FD10(S *s) { int lim = s->e[0].x; E *p = &s->e[1]; for (int i = 1; i < 8; i++, p++) if (p->x >= lim) return 0; return 1; }

