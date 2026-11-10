// @flags -fexceptions
extern char D_002CF1D0[];
extern "C" int func_001CE438(const char *);
extern "C" int func_0021EE60();
extern "C" int func_0021E528(int, int, int);
extern "C" void func_001CCED0(int, void *);
struct X { char d[0x10]; X(int); void m(void *, int); ~X(); };
struct T { char p[0x38C0]; int x38C0; char q[0x3A0C - 0x38C4]; int x3A0C; char x3A10[0x94]; int x3AA4; int m(); };
extern "C" void func_0010E328(T *t) {
    func_001CE438(D_002CF1D0);
    int r0 = func_0021EE60();
    int v = t->x38C0;
    int r = t->m();
    int o = func_0021E528(r0, v, r);
    X s(t->x3A0C);
    s.m(t->x3A10, o);
    func_001CCED0(t->x3AA4, t->x3A10);
}

