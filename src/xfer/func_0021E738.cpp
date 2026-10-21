struct C { char pad[0x8]; int x; };
struct B { char pad[4]; C **arr; };
struct A { char pad[0x14]; B *b; };
extern "C" int func_0021E738(A *a, int i) { return a->b->arr[i]->x; }
