struct M { char p[0x418]; float x418; char q[0x42C - 0x41C]; float x42C, x430; char r[3]; unsigned char x437; char s[0x490 - 0x438]; short x490; char u[0x4DC - 0x492]; unsigned char x4DC; char w[0x534 - 0x4DD]; unsigned char x534; char y; unsigned short x536; };
struct S { char p[0x1C6]; unsigned short x1C6; char q[0x1FB - 0x1C8]; unsigned char x1FB; };
struct T { char p[0x10]; S s; char q[0xF84 - 0x10 - sizeof(S)]; M m; };
struct A { char p[2]; signed char x2; char q[9]; short xC; };
extern float D_00351D98;
extern "C" void func_001E50C0(T *t, A *a, char *b, int k) { M *m = &t->m; S *s = &t->s;
 if (m->x4DC || m->x536) { m->x418 = 0; return; }
 if (m->x534 == 8) goto zero;
 if (k == 3) { float v = 1.0f - m->x42C; m->x42C = 0; m->x418 = v; if (v == m->x42C) return; b[1] = 0; b[0] = 0; return; }
 if (k == 6) { if (a->x2) { m->x418 = 0; return; } if (a->xC) { m->x418 = 0; return; } }
 if (s->x1FB == 1 && m->x430 > D_00351D98) { m->x418 = 0; return; }
 if (!m->x437) { m->x418 = 0; if (m->x42C < 0.25f) m->x418 = 1.0f; return; }
 m->x418 = 1.0f; if (!(m->x490 < s->x1C6)) return;
 zero: m->x418 = 0; }

