struct T { char p[0x7C]; int a[12]; };
extern "C" int func_0022CB88();
extern "C" void func_00216248(T *t, int i) { int j = 5; if (i < 5) { do { int k = j - 1; t->a[j] = t->a[k]; j = k; } while (i < j); } t->a[i] = func_0022CB88(); }

