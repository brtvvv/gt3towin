struct S { char p[0xC]; char name[0x20]; };
extern "C" int func_0023C808(const char *, const char *), func_001C3310(S *, const char *);
extern "C" char *func_0027FDBC(char *, const char *);
extern "C" int func_001C32A0(S *s, const char *n) { if (func_0023C808(n, s->name)) return 1; int r = func_001C3310(s, n); func_0027FDBC(s->name, n); return r; }
