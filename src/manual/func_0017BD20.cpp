struct O { char p[0x210]; int sub; }; struct A { char p[8]; O **arr; }; struct S { char p[0x18]; A *a; }; extern "C" int *func_0017BD20(S *s, int i) { return &s->a->arr[i]->sub; }
