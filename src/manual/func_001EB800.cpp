struct S { char b[32]; };
struct T { char pad[0x1378]; int n; S s; };
extern "C" void func_001EB800(T *a, S *s) { a->s = *s; a->n = 0; }

