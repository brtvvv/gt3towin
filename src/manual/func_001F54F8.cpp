extern "C" long func_0026DB68(void *, int); extern int D_002DA490[];
extern "C" int func_001F54F8(void *a) { int v = func_0026DB68(a, 3); int s = func_0026DB68(a, 1); int r = func_0026DB68(a, (v << 1) | 1); r += D_002DA490[v]; if (s) r = -r; return r; }

