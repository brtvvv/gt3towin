typedef struct { char p[0x18]; int h; int x; int a; } S;
int func_00286D90(void), func_00286D30(int, int);
void func_00286EB0(int);
void func_00261590(S *s) { int t = func_00286D90(); int r = func_00286D30(t, s->a); if (s->h != -1) { func_00286EB0(s->h); s->h = -1; } func_00286D30(t, r); }
