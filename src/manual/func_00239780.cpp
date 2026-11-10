// @flags -fexceptions
extern char D_00354718[], D_002ED3B8[];
extern "C" long func_00232210(void *);
struct R { char p[8]; long arr[4]; };
extern "C" R *func_00232658(const char *, int, long);
struct O { char p[0x190]; long x190; };
struct T { char p[0x18]; O *x18; };
struct X { char d[0x1F0]; X(); void m(long); int m3(); ~X(); };
extern "C" int func_00239780(T *t, int i) {
    O *o = t->x18;
    if (o->x190 == func_00232210(D_00354718)) return 0;
    R *r = func_00232658(D_002ED3B8, 0x21, t->x18->x190);
    long *p = r->arr;
    p += i;
    X x;
    x.m(*p);
    return x.m3();
}

