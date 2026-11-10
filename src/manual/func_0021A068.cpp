// @flags -fexceptions
extern "C" char *func_00219FA8(void *);
extern "C" int func_00232210(void *);
extern "C" void func_0023BFF8(char *, void *);
extern "C" void func_00237008(char *, void *);
extern "C" void func_0021A000(void *, char *);
struct X { char d[0x1F0]; X(); int m(int); ~X(); };
extern "C" char *func_0021A068(void *p0, void *p1, void *p2) {
    char *o = func_00219FA8(p0);
    if (!o) return 0;
    { X t; if (!t.m(func_00232210(p1))) return 0; }
    func_0023BFF8(o, p1);
    func_00237008(o + 0x10, p2);
    func_0021A000(p0, o);
    return o;
}

