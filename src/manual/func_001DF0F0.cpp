struct E { char p[0x20]; unsigned char v; char q[7]; };
struct X { unsigned char p[9]; char a, b; char q[5]; char c, d; char r[5]; char e, f; char s[8]; char g; char t2; char h; };
struct T { E a[4], b[4], c[4]; X x; };
extern "C" void func_001DF068(E *, int); extern "C" void func_001DF0A8(char *, char *);
extern "C" void func_001DF0F0(T *t) { int i; for (i = 0; i < 4; i++) { func_001DF068(&t->a[i], 1); func_001DF068(&t->b[i], 0); if (t->b[i].v < 50) t->b[i].v = 50; else if (t->b[i].v > 200) t->b[i].v = 200; func_001DF068(&t->c[i], 0); }
 X *x = &t->x; func_001DF0A8(&x->a, &x->b); func_001DF0A8(&x->c, &x->d); func_001DF0A8(&x->e, &x->f); func_001DF0A8(&x->g, &x->h); if (!x->p[2]) x->p[2] = 1; }

