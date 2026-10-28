struct __attribute__((packed)) B { char d[0x3C]; };
struct __attribute__((packed)) S { char p[0x20]; B b; };
extern "C" char *func_00232030(S *s, char *d) { *(B *)d = s->b; return d + 0x3C; }
