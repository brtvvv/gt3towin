struct E { char *r; int x4; };
struct S { char p[0x1C]; E e[1]; };
extern "C" S *func_0016CD60();
extern "C" int func_0016CD98(int i, int k) { if (!k) return *(int *)(func_0016CD60()->e[i].r + 0x10); int m = 0x1B00; char *a = func_0016CD60()->e[i].r + k * m; char *b = func_0016CD60()->e[i].r + (k - 1) * m; return *(int *)(a + 0x10) - *(int *)(b + 0x10); }

