struct T { char p[0xF0]; int a[12]; };
extern "C" int func_0022CB88();
extern "C" void func_00214630(T *t, int i) { int j = 11; if (i < 11) { do { int k = j - 1; t->a[j] = t->a[k]; j = k; } while (i < j); } t->a[i] = func_0022CB88(); }

