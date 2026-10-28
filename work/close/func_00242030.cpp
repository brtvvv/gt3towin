extern "C" int func_00241BF8(int, int *, int);
extern "C" int func_00242030(int a, int b, int c) { int st[3]; while (func_00241BF8(a, st, c) == -1) ; int r = st[0]; if (b) { if (r & 4) r = st[1]; else r = st[2]; } return r; }
