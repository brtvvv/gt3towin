struct C { char pad[0x0]; int x; };
struct B { char pad[4]; C **arr; };
struct A { char pad[0x20]; B *b; };
extern "C" int func_0021EB10(A *a, int i) { return a->b->arr[i]->x; }
