struct R { unsigned int lo, hi; };
struct B { int a, b; unsigned int c, d; };
extern "C" int func_0026C360(R *r, B *p) {
    if ((unsigned int)p < r->lo) return 0;
    if (!((unsigned int)p < r->hi)) return 0;
    if (p->c != 0xFFFFFFFFu) return 0;
    return p->d == 0xFFFFFFFFu;
}

