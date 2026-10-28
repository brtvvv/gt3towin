struct P { int a, b; unsigned c, d; };
struct R { P *lo, *hi; };
extern "C" int func_0026C360(R *r, P *p) {
    if (p < r->lo || p >= r->hi) return 0;
    if (p->c != 0xFFFFFFFFu) return 0;
    return p->d == 0xFFFFFFFFu;
}

