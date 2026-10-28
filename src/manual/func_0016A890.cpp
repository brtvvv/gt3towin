struct S { char p[0x248]; char str[0x80]; long a; long b; };
extern char D_00353398[];
extern "C" void func_0016A908(S *, int), func_0016A940(S *, char *);
extern "C" int *func_0021BB28(long *, int);
extern "C" void func_0026D950(char *, char *, int, int);
extern "C" void func_0016A890(S *s, long *v) { s->a = v[0]; s->b = v[1]; func_0016A908(s, ((signed char *)&s->b)[1] != 0); int *r = func_0021BB28(&s->a, 0); func_0026D950(s->str, D_00353398, r[2], r[3]); func_0016A940(s, s->str); }
