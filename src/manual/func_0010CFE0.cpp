struct S { char p[0x124]; int n; char q[0xC]; int *arr; }; extern "C" void func_0010CFE0(S *s, int i, int v) { if (i >= 0 && i < s->n) s->arr[i] = v; }
