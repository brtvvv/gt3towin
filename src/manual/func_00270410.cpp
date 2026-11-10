struct L8 { char c[8]; };
struct X { char p[4]; L8 **x4; };
struct E { char p[0xC]; X *xC; };
extern char D_004ACC68[];
extern "C" int func_00270410(int i, L8 *out) { E *e = (E *)(D_004ACC68 + i * 8); L8 *p = *e->xC->x4; if (!p) return 1; if (out) *out = *p; return 0; }

