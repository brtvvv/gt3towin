struct C { char pad[0x4]; int x; };
struct B { char pad[4]; C **arr; };
struct A { char pad[0x28]; B *b; };
extern "C" int func_0021ED68(A *a, int i) { return a->b->arr[i]->x; }
