extern "C" int func_0023EBE8(const unsigned char *a, const unsigned char *end, const char *b) {
    while (a != end) {
        char c = *b;
        if (!c) return 1;
        int d = *a - (unsigned char)c;
        if (d) return d;
        a++; b++;
    }
    return *b ? -1 : 0;
}

