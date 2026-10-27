struct E { char p[0x24]; unsigned char st; char q[0xB]; float x; float y; char r[0xA4 - 0x38]; };
struct S { char p[0xFE4]; E e[1]; };
extern "C" void func_001DF4A8(S *s, int i, float *ox, float *oy, float x, float y) { char *q = (char *)s + i * 0xA4; E *e = (E *)(q + 0xFE4); int st = e->st; if (st < 5) if (st >= 2) { *ox = x * e->x; *oy = y * e->y; } }

