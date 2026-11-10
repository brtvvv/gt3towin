struct T { int n; int a[1]; };
extern "C" void func_00229D00(int, int, int);
extern "C" void func_0022A280(T *t, int b, int c) { for (int i = 0; i < t->n; i++) func_00229D00(t->a[i], b, c); }

