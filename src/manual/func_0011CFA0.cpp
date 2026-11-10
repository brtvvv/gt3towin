extern char D_002F7008[], D_00352AE8[];
extern "C" int func_002469E0(char *);
extern "C" int sprintf(char *, const char *, ...);
struct T { char p[0xE50]; int xE50; };
extern "C" void func_0011CFA0(T *t, char *buf) { int a = t->xE50; int v = func_002469E0(D_002F7008); sprintf(buf, D_00352AE8, a, v); }

