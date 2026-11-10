struct E { short x0; unsigned short x2; short x4, x6; };
struct T { E e[256]; char c[0x18]; int n; };
extern "C" int func_0026AD38();
extern "C" void func_00179F40(T *t, int i) { int r = func_0026AD38(); t->c[t->e[i].x0]--; t->n--; for (; i < t->n; i++) t->e[i] = t->e[i + 1]; if (r) __asm__ volatile("ei"); }

