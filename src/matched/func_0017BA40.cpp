struct C { char pad[0x20]; int x; };
struct B { char pad[8]; struct C **arr; };
struct A { char pad[0x18]; struct B *b; };
extern "C" void func_00232C10(void *p, int x);
extern "C" void func_0017BA40(struct A *a, int i, int x) { func_00232C10(&a->b->arr[i]->x, x); }
