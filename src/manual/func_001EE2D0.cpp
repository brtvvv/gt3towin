struct G { char p[0x1465]; unsigned char x1465; };
struct T { char p[0xE384]; int n; int o[8]; };
extern "C" G *func_001F3A90(T *, int);
extern "C" void func_001EE2D0(T *t) { int i; for (i = 7; i >= 0; i--) t->o[i] = -1; for (i = 0; i < t->n; i++) { G *g = func_001F3A90(t, i); g->x1465 = i + 1; t->o[i] = i; } }

