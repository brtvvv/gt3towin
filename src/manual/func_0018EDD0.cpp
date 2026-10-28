struct E { char p[0x1F8]; };
struct T { char p[0x54]; void *vt; char q[0x240]; E e[8]; };
extern char D_0032EFF0[];
extern "C" void func_00232BB8(E *, int), func_00190378(T *, int);
extern "C" void func_0018EDD0(T *t, int c) { t->vt = D_0032EFF0; E *b = t->e; if (b) { E *p = b + 8; if (b != p) { do { p--; func_00232BB8(p, 2); } while (b != p); } } func_00190378(t, c); }
