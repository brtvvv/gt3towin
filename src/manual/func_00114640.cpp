// @flags -fexceptions
extern "C" int func_0021EE60();
extern "C" int func_0021E528(int, int, int);
extern "C" int func_00232210(int);
struct X { char d[0x30]; X(); int m(int); ~X(); };
struct T { char p[0x38C0]; int x38C0; int m(); };
extern "C" int func_00114640(T *t) {
    int g = func_0021EE60();
    int v = t->x38C0;
    int r = t->m();
    int o = func_0021E528(g, v, r);
    X x;
    return x.m(func_00232210(o)) == 2;
}

