struct C { char pad[0x20DC]; int x; };
struct B { char pad[8]; C **arr; };
struct A { char pad[0x18]; B *b; };
extern "C" int func_0017BD00(A *a, int i) { return a->b->arr[i]->x; }
