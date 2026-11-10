struct S { char d[0x3C]; };
struct T { int x0; char p[0x1C]; S x20; };
extern "C" char *func_002320B8(T *t, char *s) { t->x20 = *(S *)s; t->x0 = *(int *)&t->x20 != 0; return s + 0x3C; }

