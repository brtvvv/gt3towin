struct A { char p[8]; char **x8; };
struct T { char p[0x18]; A *x18; char q[0x8AC - 0x1C]; char x8AC; };
extern "C" void func_001790F0(char *, int, int); extern "C" void func_0017C2C0(char *, char *, int);
extern "C" void func_0017B8F0(T *t, int i, int b, int c) { char *s = t->x18->x8[i]; func_001790F0(s, b, c); func_0017C2C0(s + 0x11DC, &t->x8AC, b); }

