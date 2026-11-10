struct T { int a[12]; char p[0x2A0 - 48]; char m[1]; };
extern "C" int func_00214248(T *, int); extern "C" void func_00214DD0(char *, int);
extern "C" int func_002142B0(T *t, int v) { int k = func_00214248(t, v); if (k >= 0) { for (int i = 11; k < i; i--) t->a[i] = t->a[i - 1]; t->a[k] = v; func_00214DD0(t->m, k); return k; } return -1; }

