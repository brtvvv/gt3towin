struct Q { int a, b; } __attribute__((aligned(1)));
struct U { Q q; };
extern char D_0049FE48[]; extern "C" int func_0026AD38();
extern "C" void func_0022CBA0(Q *o) { int r = func_0026AD38(); __builtin_memcpy(o, D_0049FE48, 8); if (r) __asm__ volatile("ei"); }

