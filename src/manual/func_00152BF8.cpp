struct R { int a, b; };
extern "C" long func_00151178(int, int); extern "C" void *func_0014ADD0(int); extern "C" int func_0014F590(void *);
extern "C" long func_00152BF8(int t, int a) { void *p = func_0014ADD0(a); if (!p || !func_0014F590(p)) { R r; r.a = 8; r.b = 0; return *(long *)&r; } return func_00151178(t, a); }

