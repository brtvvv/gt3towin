struct R { char p[0x58]; int x58; };
extern char *D_002B3220[], *D_002B3224[]; extern char D_00353138[];
extern "C" R *func_0014ADA8(int); extern "C" char *func_0027FDBC(char *, char *); extern "C" void func_0023C8E8(char *, long); extern "C" char *func_0027F9CC(char *, char *);
extern "C" void func_0014BD00(int a, char *s) { R *r = func_0014ADA8(a); if (r) { int k = r->x58; if (k == -1) func_0027FDBC(s, D_002B3220[0]); else if (k == -2) func_0027FDBC(s, D_002B3224[0]); else if (k == -3) __builtin_strcpy(s, "----"); else { func_0023C8E8(s, k); func_0027F9CC(s, D_00353138); } } else *s = 0; }

