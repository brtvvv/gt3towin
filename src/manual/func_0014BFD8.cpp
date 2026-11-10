struct R { char p[0x2C]; unsigned short x2C; };
extern char *D_002B3228[], *D_002B322C[];
extern "C" R *func_0014ADA8(int); extern "C" void func_0027FDBC(char *, char *);
extern "C" void func_0014BFD8(int a, char *b) { R *r = func_0014ADA8(a); if (r) { if ((r->x2C >> 3) & 1) func_0027FDBC(b, D_002B3228[0]); else func_0027FDBC(b, D_002B322C[0]); } else *b = 0; }

