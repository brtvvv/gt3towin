struct S { int n; int *e[1]; };
extern "C" void func_00229D00(int *, int, int);
extern "C" void func_0022A280(S *s, int a, int b) { for (int i = 0; i < s->n; i++) func_00229D00(s->e[i], a, b); }
