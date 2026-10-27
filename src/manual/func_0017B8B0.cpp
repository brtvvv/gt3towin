struct O { char p[0x20F8]; int f; }; struct A { char p[8]; O **arr; }; struct S { char p[0x18]; A *a; }; extern "C" void func_0017B8B0(S *s, int v, int i) { s->a->arr[i]->f = v; }
