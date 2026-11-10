// @flags -fexceptions
struct A4 { int a, b, c, d; };
struct X { char d[0x154]; X(A4 *, int, int); };
struct T { char p[0x38]; int x38, x3C, x40, x44, x48; char q[8]; int x54, x58, x5C; X *x60; void m(int, int); };
extern "C" void func_001CDB58(T *t, int p1, int p2) {
    t->x38 = 0; t->x40 = 0; t->x3C = 0;
    A4 s; s.a = 1; s.b = 4; s.c = 10; s.d = 11;
    t->x60 = new X(&s, p1, p2);
    t->x44 = p1; t->x48 = p2;
    t->m(p1, p2);
    t->x54 = 1; t->x58 = -1; t->x5C = 0;
}

