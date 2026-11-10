// @flags -fexceptions
extern char *D_002A62D8[];
struct V3 { float a, b, c; void set(float x, float y, float z) { a = x; c = z; b = y; } };
struct XB0 { char p[0x1C]; virtual ~XB0(); };
struct XM : XB0 { V3 v20, v2C; float x38, x3C; char r[0xC0]; XM(int, int); ~XM(); void init2(char *, int); };
struct D : XM { XM m100; D(int, int, int, int, char *) asm("func_0014D730"); };
D::D(int a, int b, int c, int d, char *t) : XM(a, b), m100(0, 0) {
    int k = *(int *)(t + 0x306AC);
    int i = 0x11;
    if (k != 0xC) i = k;
    XM *m = &m100;
    m->init2(D_002A62D8[i - 0x10], d);
    m->v20.set(0, 0, v20.c);
    m->v2C.set(0, 0, v2C.c);
    m->x38 = x38;
    m->x3C = x3C;
}

