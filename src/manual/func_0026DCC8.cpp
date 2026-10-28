extern unsigned D_00304C98[];
extern "C" unsigned func_0026DCC8(const unsigned char *p, int n) {
    unsigned *t = D_00304C98;
    unsigned c = 0xFFFFFFFFu;
    const unsigned char *e = p + n;
    if (n) do { c = t[(c ^ *p++) & 0xFF] ^ (c >> 8); } while (p != e);
    return ~c;
}

