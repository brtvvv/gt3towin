// @flags -fexceptions
extern char D_00353330[];
extern "C" char *func_00219680();
extern "C" int func_0027FC78(const char *, const char *);
extern "C" int func_00232210(void *);
struct X { char p[0x1C]; X(int, void *); virtual ~X() {} int m(); };
struct T { char p[0x10]; char x10[4]; };
extern "C" int func_00168210(T *t) {
    char *s = func_00219680() + 0x3080C;
    if (!func_0027FC78(s, D_00353330)) return 1;
    X x(func_00232210(s), t->x10);
    return x.m();
}

