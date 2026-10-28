struct S { char p[0xC4]; int **e; int n; };
extern "C" void func_001BC578(int *, int);
extern "C" void func_001C1368(S *s, int a) { for (int i = 0; i < s->n; i++) if (s->e[i]) func_001BC578(s->e[i], a); }
