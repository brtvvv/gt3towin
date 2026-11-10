struct T { char p[0x248]; char x248[0x80]; long x2C8, x2D0; };
extern char D_00353398[];
extern "C" void func_0016A908(T *, int); extern "C" int *func_0021BB28(long *, int); extern "C" void func_0026D950(char *, char *, int, int); extern "C" void func_0016A940(T *, char *);
extern "C" void func_0016A890(T *t, long *s) { t->x2C8 = s[0]; t->x2D0 = s[1]; func_0016A908(t, ((signed char *)t)[0x2D1] != 0); int *r = func_0021BB28(&t->x2C8, 0); func_0026D950(t->x248, D_00353398, r[2], r[3]); func_0016A940(t, t->x248); }

