struct E { char p[0x18]; char s[0x1E8]; };
struct T { char p[0x54]; void *vt; E e[2]; };
extern char D_0032B850[];
extern "C" void func_00232BB8(char *, int), func_0017A630(T *, int);
extern "C" void func_00185010(T *t, int c) { t->vt = D_0032B850; E *b = t->e; if (b) { E *p = b + 2; if (b != p) { do { p--; func_00232BB8(p->s, 2); } while (b != p); } } func_0017A630(t, c); }
