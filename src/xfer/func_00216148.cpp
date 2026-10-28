extern "C" char *func_0027FDBC(char *, const char *);
extern "C" int func_0026ACA0(const char *);
struct S { char p[0x4]; char e[12][16]; };
extern "C" void func_00216248(S *, int);
extern "C" void func_00216148(S *s, const char *str, int idx) {
    for (int i = 5; idx < i; i--) func_0027FDBC(s->e[i], s->e[i - 1]);
    int n = func_0026ACA0(str);
    char *t = (char *)__builtin_alloca(n);
    func_0027FDBC(t, str);
    if (n >= 16) t[15] = 0;
    func_0027FDBC(s->e[idx], t);
    func_00216248(s, idx);
}
