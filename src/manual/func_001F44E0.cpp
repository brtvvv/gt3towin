struct S { char p[0x28]; int x28; char q[0x40]; int x6C; char r[0xC]; int x7C; };
struct T { S *x0; char p[0xE340 - 4]; char xE340; char xE341; char q[0xE378 - 0xE342]; short xE378; };
extern "C" void func_001DB618(char *, int);
extern "C" void func_001F44E0(T *t, S *s) { t->x0 = s; func_001DB618(&t->xE340, s->x28); if (s->x7C || s->x6C) { t->xE341 = 0; t->xE378 = 0; } }

