struct G { unsigned x0, x4, x8; char *xC; unsigned x10; };
extern G D_002FF080[];
extern "C" void func_0025EF40(char *p, unsigned n) {
    G *g = D_002FF080;
    g->x4 = 0;
    unsigned c = (n - 0x40) / 0x80C;
    g->xC = p; g->x0 = c;
    g->x10 = (int)(p + c * 12 + 0x3F) & -64;
}

