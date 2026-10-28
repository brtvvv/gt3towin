struct S { char p[0x14]; void *vt; int a; unsigned c[4]; unsigned char b[4]; };
extern char D_00330360[];
extern "C" void func_00197398(S *);
extern "C" S *func_00199BC8(S *s) { func_00197398(s); s->a = 0; s->vt = D_00330360; for (int i = 0; i < 4; i++) { s->c[i] = 0x80202020u; s->b[i] = 0; } return s; }
