extern "C" int func_00213D10(char *, int, int);
extern "C" int func_002140A0(char *p, int r) { char *e = p + 0x8400; do { r = func_00213D10(p, r, 0); p += 0x300; } while ((int)p < (int)e); return r; }

