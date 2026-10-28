struct L { char p[8]; char **e; };
struct S { char p[0x18]; L *l; char q[0x890]; char m[4]; };
extern "C" void func_00179128(char *, int, int);
extern "C" int func_0017C2F0(char *, char *);
extern "C" void func_0017C258(char *, char *);
extern "C" int func_0017B958(S *s, int i, int a, int c) { char *e = s->l->e[i]; char *q = e + 0x11DC; func_00179128(e, a, 1); int r = func_0017C2F0(q, s->m); if (c) func_0017C258(s->m, q); return r; }
