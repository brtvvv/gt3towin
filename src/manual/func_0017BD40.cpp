struct A { char p[8]; int *arr; }; struct S { char p[0x18]; A *a; }; extern "C" int func_0017BD40(S *s, int i) { return s->a->arr[i]; }
