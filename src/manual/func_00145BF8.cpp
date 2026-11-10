extern char D_002F49E0[];
extern "C" int func_002428C8(char *, int, int, int, char *);
extern "C" int func_00145BF8(char *t, void (*cb)(int, float), int a) { if (cb) cb(a, 1.0f); int r = func_002428C8(t + 0x34, 0, 0, 1, D_002F49E0); if (cb) cb(a, 1.0f); return r; }

