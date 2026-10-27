struct C { char p[0x20E8]; int x; };
struct B { int p[2]; C **arr; };
struct A { char p[0x18]; B *b; };
extern "C" void func_001F41C0(A **s, int i, int *o1, int *o2, int *o3, int *o4) { *o1 = (*s)->b->arr[i]->x; *o2 = 0; *o3 = 2; *o4 = 1; }

