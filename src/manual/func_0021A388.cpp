struct S { char p[0x18]; long t; };
extern "C" char *func_0023D558(char *);
extern "C" int func_00238C40(char *);
extern "C" void func_0021A1B0(S *, char *);
extern "C" void func_0021A388(S *s) { char *x = func_0023D558((char *)s + 0x1B6B8); int v = func_00238C40(x + 0x10); s->t += v / 4; func_0021A1B0(s, x); }
