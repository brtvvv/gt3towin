struct T { char p[0x18]; long x18; };
extern "C" char *func_0023D558(char *); extern "C" int func_00238C40(char *); extern "C" void func_0021A1B0(T *, char *);
extern "C" void func_0021A388(T *t) { char *s = func_0023D558((char *)t + 0x1B6B8); int n = func_00238C40(s + 0x10); t->x18 += n / 4; func_0021A1B0(t, s); }

