extern "C" void func_001C5E88(int);
extern "C" void func_001C47C8(int *a, int n, int pos) { if (pos < 0) return; if (a[0]) func_001C5E88(3); int i; for (i = pos; i < n - 1; i++) a[i] = a[i + 1]; a[i] = 0; }

