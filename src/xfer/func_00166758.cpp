extern "C" void func_001666F0(void);
struct R {
    int a, b, c, d; void (*fn)(void); int e, f, g;
    R(int a_, int b_, int c_, int d_, void (*fn_)(void), int e_, int f_, int g_) : a(a_), b(b_), c(c_), d(d_), fn(fn_), e(e_), f(f_), g(g_) {}
};
struct Sub { char p[0x540]; char *q; };
struct G { char p[0x307C8]; Sub s; };
struct X { char p[0x11]; unsigned char lv; };
extern "C" G *func_00219680(void);
extern "C" X *func_002359F8(char *);
extern "C" void func_00165F38(char *, int, int *, int *, int *, int *);
extern "C" R func_00166758(char *s) {
    Sub *g = &func_00219680()->s;
    int lv;
    if (g->q && (lv = func_002359F8(g->q + 0x10)->lv, lv >= 5)) {
        struct { int a, b, c, d; } t;
        func_00165F38(s + 0xE40, 5, &t.a, &t.b, &t.c, &t.d);
        return R(t.a, t.b + 1, *(int *)(s + 0xF54), 1, func_001666F0, 0, t.c, t.d + 1);
    }
    return R(0, 1, 0, 1, func_001666F0, 0, 0, 0);
}
