extern char *D_002A6308[];
struct R { char p[0x14]; unsigned x14; };
extern "C" R *func_0014C9B8(int); extern "C" char *func_0027FDBC(char *, const char *);
extern "C" void func_0014C170(int a, char *out) { R *r = func_0014C9B8(a); if (!r) return; if (r->x14 < 6) func_0027FDBC(out, D_002A6308[r->x14]); else out[0] = 0; }

