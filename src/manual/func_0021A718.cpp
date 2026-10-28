struct S { char p[0x18]; long t; };
extern char D_00354440[];
extern "C" int func_0023D558(char *), func_0021ED00(void *, char *);
extern "C" void *func_0021EE60(void);
extern "C" void func_0021A640(S *, int);
extern "C" void func_0021A718(S *s) { int a = func_0023D558((char *)s + 0x1F544); int n = func_0021ED00(func_0021EE60(), D_00354440); s->t += n / 4; func_0021A640(s, a); }
