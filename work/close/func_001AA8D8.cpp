struct E { unsigned long k; long v; };
extern int D_00353BC8;
extern E *D_00353BCC;
extern "C" int func_001AA8D8(unsigned long key) {
    int lo = 0, hi = D_00353BC8;
    while (lo < hi) {
        int m = (lo + hi) >> 1;
        unsigned long k = *(unsigned long *)((char *)D_00353BCC + m * 16);
        if (key == k) return m;
        if (key < k) hi = m; else lo = m + 1;
    }
    return 0;
}
