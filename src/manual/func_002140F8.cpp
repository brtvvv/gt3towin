extern "C" int func_00213D40(char *, int);
extern "C" int func_002140F8(char *t, int r) { char *p = t; char *e = t + 0x8400; do { r = func_00213D40(p, r); p += 0x300; } while ((int)p < (int)e); return r; }

