struct S { char p[0x10]; char a[0x24]; char b[0x12]; short h; };
extern int D_00353B14;
extern "C" void func_00190B38(int, void *, int *, int *, void *);
extern "C" int func_001A1100(S *s) { int v = s->h; int w; func_00190B38(D_00353B14, s->a, &v, &w, s->b); s->h = v; return v >= 0; }

