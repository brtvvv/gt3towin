struct S { int d[5]; };
struct T { char p[0x310]; S a; char q[0x334 - 0x324]; S b; char r[0x34C - 0x348]; int x34C; };
extern "C" int func_0026AD38();
extern "C" void func_0025D520(T *t, S *a, S *b) { int r = func_0026AD38(); t->x34C = 1; t->a = *a; t->a.d[0] = 0; t->b = *b; t->b.d[0] = 1; if (r) __asm__ volatile("ei"); }

