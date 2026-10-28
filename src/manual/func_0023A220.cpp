struct E { unsigned k; int a, b, c; };
struct H { char p[0x10]; int off; };
extern "C" E *func_0023A220(H **h, unsigned key) {
    char *b = (char *)*h + (*h)->off;
    int lo = -1, hi = *(int *)b;
    E *e = (E *)(b + 4);
    do {
        int m = (lo + hi) >> 1;
        E *p = &e[m];
        if (p->k == key) return p;
        if (p->k < key) lo = m; else hi = m;
    } while (lo + 1 != hi);
    return 0;
}

