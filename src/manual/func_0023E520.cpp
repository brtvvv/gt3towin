extern "C" unsigned func_0023E520(const unsigned char *p, int n) {
    const unsigned char *e = p + n;
    unsigned h = 0;
    while (p < e) { h = (h << 4) + *p++; unsigned g = h & 0xF0000000; if (g) h ^= g >> 24; h &= ~g; }
    return h;
}

