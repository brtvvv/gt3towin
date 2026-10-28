extern "C" int func_0023EBE8(const unsigned char *p, const unsigned char *e, const char *s) {
    for (; p != e; p++, s++) { char c = *s; if (!c) return 1; int d = *p - (unsigned char)c; if (d) return d; }
    return *s ? -1 : 0;
}

