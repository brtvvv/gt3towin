struct L { int p[2]; int *arr; }; extern "C" L *func_0021E1F0(void *, int);
extern "C" int func_0021E288(void *a, int i, int j) { return func_0021E1F0(a, j)->arr[i]; }

