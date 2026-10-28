extern "C" int func_0022CB88(void);
struct S { char p[0xF0]; int a[12]; };
extern "C" void func_00214630(S *s, int idx) { for (int i = 11; idx < i; i--) s->a[i] = s->a[i - 1]; s->a[idx] = func_0022CB88(); }
