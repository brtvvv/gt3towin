struct X { char p[0x14]; unsigned k; };
extern char *D_002A6308[];
extern "C" X *func_0014C9B8(int, char *);
extern "C" char *func_0027FDBC(char *, const char *);
extern "C" void func_0014C170(int a, char *out) { X *x = func_0014C9B8(a, out); if (!x) return; if (x->k < 6) func_0027FDBC(out, D_002A6308[x->k]); else *out = 0; }

