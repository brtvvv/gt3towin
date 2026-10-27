struct Ops { int a; void (*fn)(void *); }; struct R { int a, b; Ops *ops; };
struct V { virtual R *f0(); };
extern "C" void func_00244108(V *v) { v->f0()->ops->fn(v); }

