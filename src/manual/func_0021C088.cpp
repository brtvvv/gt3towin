struct T { int x0; unsigned char a[8]; unsigned char c[8]; };
extern "C" void func_0021D3C0(char *, int, unsigned char *, unsigned char *, int); extern "C" void func_0021D840(unsigned char *, unsigned char *, int, char *); extern "C" void func_0021D4D0(char *, char *);
extern "C" void func_0021C088(T *t, unsigned char *k) { unsigned char b[16]; char s1[0xE0]; char s2[0xE0]; unsigned i; unsigned char *p;
 func_0021D3C0(s1, t->x0, t->c, k, 10); func_0021D840(b, t->a, t->x0, s1); func_0021D3C0(s2, t->x0, k, t->a, 10); func_0021D4D0(s1, s2);
 for (i = 0, p = t->a; i < 8; i++) { *p++ ^= b[i]; b[i] = ~t->c[i]; } func_0021D840(b, b, t->x0, s1); for (unsigned j = 0; j < 8; j++) t->c[j] ^= b[j]; }

