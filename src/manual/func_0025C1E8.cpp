extern "C" void func_002876F0(char *, char *); extern "C" int func_00289DA8(int, int, int, char *, int, char *, int, int, int);
extern "C" int func_0025C1E8(int a, int b, int c, char *s, int n, char *r, int m, int cb, int arg) { if (s) { n = (n + 15) & -16; func_002876F0(s, s + n); } if (r) func_002876F0(r, r + m); return func_00289DA8(a, b, c | 2, s, n, r, m, cb, arg); }

