struct I { short x0; unsigned short x2; char p[4]; char *x8; };
struct E { char p[0x40]; int x40; char q[0x68 - 0x44]; I *x68; };
struct T { char p[0xAC]; int xAC; char q[0xD8 - 0xB0]; float xD8; char r[0xE4 - 0xDC]; E *xE4; char s[4]; char *xEC; };
extern char D_002F2F98[], D_00353F10[];
extern "C" void func_001BB4C0(T *); extern "C" void func_001BB1A8(T *); extern "C" int func_0026ACA0(char *); extern "C" char *func_0027FDBC(char *, char *); extern "C" void func_0023E6E0(char *, char *, char *); extern "C" void func_001BB478(T *);
extern "C" void func_001BB688(T *t) { if (!t->xE4) return; if (!t->xAC) return; func_001BB4C0(t); if (!(t->xE4->x40 & 4)) return; func_001BB1A8(t); char *s = t->xEC; if (!s) s = t->xE4->x68->x8; int n = func_0026ACA0(s); char *b = (char *)__builtin_alloca(n + 1); func_0027FDBC(b, s); if ((t->xE4->x68->x2 & 0xF0) == 0x20) { int k = (int)t->xD8; if (k < n) b[k] = 0; } func_0023E6E0(D_002F2F98, D_00353F10, b); func_001BB478(t); }

