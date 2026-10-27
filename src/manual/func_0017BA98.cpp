struct O { char p[0x20E0]; int f; }; struct A { char p[8]; O **arr; }; struct S { char p[0x18]; A *a; }; extern "C" void func_0017BA98(S *s, int i, int v) { s->a->arr[i]->f = v; }
