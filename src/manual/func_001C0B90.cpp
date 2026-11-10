struct O { char p[0x1C]; virtual void f0(); virtual void f1(); virtual void g(); };
struct T { int x0, x4, x8; };
extern "C" int func_001C0E30(T *); extern "C" O **func_001C0AB8(T *, O **, int); extern "C" void func_0027EE20(void *, int, int, void *); extern "C" int func_001C0B50(const void *, const void *);
extern "C" void func_001C0B90(T *t) { if (!t->x8) return; O **b = (O **)__builtin_alloca(func_001C0E30(t) * 4); int n = func_001C0AB8(t, b, t->x8) - b; if (n >= 2) func_0027EE20(b, n, 4, (void *)func_001C0B50); if (n > 0) { O **p = b; int k = n; do { (*p)->g(); p++; } while (--k); } }

