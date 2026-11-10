struct L { int x0; int p; int *x8; };
struct A { char p[0x18]; L *x18; };
extern "C" int func_0020A828(int, int);
extern "C" int func_0020AA50(int a, A *b, int s) { int n = b->x18->x0; int m = n; for (int i = 0; i < n; i++) { int k = (s + n - i) % m; if (func_0020A828(a, b->x18->x8[k])) return k; } return s; }


