struct S { void *p; int a, b; int h; void *vt; };
extern char D_00331788[];
extern "C" void func_0026D5B8(int), func_0027D498(void *), func_0027D2F8(S *);
extern "C" void func_0019FE90(S *s, int flag) { s->vt = D_00331788; func_0026D5B8(s->h); if (s->p) func_0027D498(s->p); if (flag & 1) func_0027D2F8(s); }

