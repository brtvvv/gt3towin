// @flags -fexceptions
extern "C" int func_00220DF0();
struct X { int x0, x4; char d[0x988]; X(int); void a(int); void b(int); int d2(int, int); ~X(); };
struct S { char p[0x17C]; int x17C; };
struct T { char p[0x30]; int x30; int x34; S *x38; int x3C, x40; void c(X *); void e(X *); };
extern "C" int func_00224840(T *t) {
    S *s = t->x38;
    X x(func_00220DF0());
    if (t->x30) {
        x.a(0); x.b(0x3C); t->c(&x); t->x40 = x.d2(1, 0);
        if (t->x30 && s->x17C >= 0) { x.a(0); x.b(0x7C); t->e(&x); t->x3C = x.d2(1, 0); }
    }
    return x.x4;
}

