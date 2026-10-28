extern "C" char *func_0027FDBC(char *, const char *);
extern "C" int func_0026ACA0(const char *);
struct S { char p[0x30]; char e[12][16]; };
extern "C" void func_00214630(S *, int);
extern "C" void func_00214438(S *s, const char *str, int idx) {
    for (int i = 11; idx < i; i--) func_0027FDBC(s->e[i], s->e[i - 1]);
    int n = func_0026ACA0(str);
    char *t = (char *)__builtin_alloca(n);
    func_0027FDBC(t, str);
    if (n >= 16) t[15] = 0;
    func_0027FDBC(s->e[idx], t);
    func_00214630(s, idx);
}
