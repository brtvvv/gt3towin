struct L { int p[2]; int *arr; }; extern "C" L *func_0021E120(void *, int);
extern "C" int func_0021E1B8(void *a, int i, int j) { return func_0021E120(a, j)->arr[i]; }

