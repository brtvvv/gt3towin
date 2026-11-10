struct Q { int a, b; } __attribute__((aligned(1)));
struct U { Q q; };
extern char D_0049FE58[]; extern "C" int func_0026AD38();
extern "C" void func_0022CC30(Q *o) { int r = func_0026AD38(); __builtin_memcpy(o, D_0049FE58, 8); if (r) __asm__ volatile("ei"); }

