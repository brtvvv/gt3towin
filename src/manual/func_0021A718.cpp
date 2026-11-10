struct T { char p[0x18]; long x18; };
extern char D_00354440[];
extern "C" char *func_0023D558(char *); extern "C" int func_0021EE60(); extern "C" int func_0021ED00(int, char *); extern "C" void func_0021A640(T *, char *);
extern "C" void func_0021A718(T *t) { char *s = func_0023D558((char *)t + 0x1F544); int n = func_0021ED00(func_0021EE60(), D_00354440); t->x18 += n / 4; func_0021A640(t, s); }

