struct T { char p[8]; unsigned short n; unsigned short stride; char q[4]; char data[1]; };
extern "C" int func_00232768(T *t, unsigned long key) {
    unsigned stride = t->stride;
    char *d = t->data;
    int lo = -1, hi = t->n;
    do {
        int m = (lo + hi) >> 1;
        unsigned long k = *(unsigned long *)(d + stride * m);
        if (k == key) return m;
        if (k < key) lo = m; else hi = m;
    } while (lo + 1 != hi);
    return -1;
}

