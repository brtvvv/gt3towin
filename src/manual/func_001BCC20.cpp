struct A { char p[0x10]; float f; char q[0x18]; int r; };
struct S { int a, b, c, d; int t; };
extern "C" int func_001BCC20(S *s, A *a) {
    if (s->t == -0x80) s->t = (int)(a->f * 50.0f);
    if (--s->t < 0) { s->t = -0x80; s->c++; }
    return a->r;
}

