struct Ops { int (*fn)(); }; struct O { int a, b; Ops *ops; };
extern "C" O *func_00243C40();
extern "C" int func_002440C8() { O *o = func_00243C40(); int r = 0; if (o) r = o->ops->fn(); return r; }

