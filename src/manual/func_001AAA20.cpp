struct E { int a, b, x8, c; };
extern int D_00353BC8; extern E *D_00353BCC;
extern "C" int *func_0026D5E0(int);
extern "C" int func_001AAA20(int **out) { int *a = func_0026D5E0(D_00353BC8 * 4); int n = D_00353BC8; for (int i = 0; i < n; i++) a[i] = D_00353BCC[i].x8; *out = a; return n; }

