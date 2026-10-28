struct S { int x; char b[8]; char p[0x44]; int f; };
extern "C" void *func_0027ED70(void *, int, int);
extern "C" void *func_00271190(S *s, int c) { void *r = func_0027ED70(s->b, 0, 8); s->b[0] = c; s->f = 1; return r; }

