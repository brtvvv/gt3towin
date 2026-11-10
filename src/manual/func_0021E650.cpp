struct L { int x0; int x4; char ***x8; };
struct T { char p[0x10]; int x10; };
extern "C" L *func_0021E1F0(int, int); extern "C" int func_0027FC78(char *, char *);
extern "C" int func_0021E650(T *t, char *name, int x) { L *l = func_0021E1F0(t->x10, x); for (int i = 0; i < l->x4; i++) if (!func_0027FC78(*l->x8[i], name)) return i; return -1; }

