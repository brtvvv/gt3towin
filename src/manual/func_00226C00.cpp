struct S { char p[0x1A]; unsigned short n; char q[0xC]; int cur; char r[0xC]; int *arr; }; extern "C" void func_00226C00(S *s, int i) { if (s && i < s->n) s->cur = s->arr[i]; }
