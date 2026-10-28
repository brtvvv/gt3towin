typedef struct { char p[0x14]; int n; int a; int h; } S;
void func_00286EE0(int), func_00286EC0(int);
void func_00261828(S *s) { func_00286EE0(s->h); if (s->n > 0) s->n--; func_00286EC0(s->h); if (s->a != -1) func_00286EC0(s->a); }

