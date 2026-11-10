struct A { char p[8]; char **x8; };
struct T { char p[0x18]; A *x18; };
extern "C" void func_00179128(char *, int, int); extern "C" int func_0017C2F0(char *, char *); extern "C" void func_0017C258(char *, char *);
extern "C" int func_0017B958(T *t, int i, int b, int c) { char *m = (char *)t + 0x8AC; char *s = t->x18->x8[i]; func_00179128(s, b, 1); char *s2 = s + 0x11DC; int r = func_0017C2F0(s2, m); if (c) func_0017C258(m, s2); return r; }

