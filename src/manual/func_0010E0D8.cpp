// @flags -fexceptions
extern "C" int func_0021EE60();
extern "C" int func_0021E628(int, int, int);
extern "C" int func_0021E528(int, int, int);
extern "C" int func_00232210(int);
extern "C" int func_0022E438();
extern "C" int func_002709C0(int, int);
struct X { char d[0x30]; X(); int m(int); ~X(); };
struct T { char p[0x3A2C]; int x3A2C; int m(); };
extern "C" int func_0010E0D8(T *t, int p1) {
    int r = t->m();
    if (!func_0021E628(func_0021EE60(), p1, r)) return 1;
    if (t->x3A2C != 6) return 0;
    {
    X x;
    int s = 0;
    switch (x.m(func_00232210(func_0021E528(func_0021EE60(), p1, r)))) {
    case 0: s = 6; break;
    case 1: s = 4; break;
    case 2: s = 2; break;
    }
    if (s < func_002709C0(func_0022E438(), 1)) return 1;
    }
    return 0;
}

