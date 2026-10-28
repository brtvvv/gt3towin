struct Y { char p[0x13C]; int on; };
struct X { char p[0x20DC]; Y *y; char q[4]; int b; int a; };
struct L { char p[8]; X **e; };
struct A { char p[0x18]; L *l; };
struct S { A *a; char p[0xB7A8]; unsigned char f; };
extern "C" void func_001F40B0(S *s, int i, int *a, int *b, int *c, int *d) { X *x = s->a->l->e[i]; if (x->y->on) { *c = 0; int k = s->f; if (k == 3) *c = 1; else if (k == 2) *c = k; } else *c = 2; if (!*c) { int va = x->a; int vb = x->b; *a = va; *b = vb; } else { *a = 0; *b = 0; } *d = 0; }
