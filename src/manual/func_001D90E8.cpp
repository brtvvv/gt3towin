struct Ops { int a; int (*fn)(void *); }; struct O { int a; Ops *ops; };
extern "C" O *func_001D9088(void *, void *);
extern "C" int func_001D90E8(void *a, void *b) { O *o = func_001D9088(a, b); if (o) return o->ops->fn(b); return 0; }

