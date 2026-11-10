// @flags -fexceptions
extern char D_002CF1D0[];
extern "C" void func_001CE438(const char *);
extern "C" void func_001CCED0(int, void *);
struct X { char d[0x10]; X(int); void m(void *, int); ~X(); };
struct T { char p[0x38DC]; int x38DC; char q[0x3A0C - 0x38E0]; int x3A0C; char x3A10[0xB4]; int x3AC4; int m(int); };
extern "C" void func_00108A70(T *t) {
    func_001CE438(D_002CF1D0);
    int r = t->m(t->x38DC);
    X s(t->x3A0C);
    s.m(t->x3A10, r);
    func_001CCED0(t->x3AC4, t->x3A10);
}

