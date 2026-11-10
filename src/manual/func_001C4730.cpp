extern "C" void func_001C5E88(int);
extern "C" void func_001C4730(int *a, int n, int pos, int v) { if (pos < n) { func_001C5E88(3); int i; for (i = n - 1; pos < i; i--) a[i] = a[i - 1]; a[i] = v; } }

