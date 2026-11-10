extern "C" float func_001F3AD0(char *); extern "C" int func_001FA7C8(char *, int, int, int, int, int, int, int, float);
extern "C" int func_001F3CD8(char *t, int a, int b, int c, int d, int e, int n) { float lim = func_001F3AD0(t) - 20.0f; float f = n; if (f < -lim) f = -lim; if (lim < f) f = lim; if (func_001FA7C8(t + 0xBBA8, 6, a, b, c, d, e, 0, f)) { int r = -1; if (r < n) r = 1; return r; } return 0; }

