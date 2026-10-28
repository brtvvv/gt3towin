extern "C" int func_0022CB88(void);
struct S { char p[0x7C]; int a[12]; };
extern "C" void func_00216248(S *s, int idx) { for (int i = 5; idx < i; i--) s->a[i] = s->a[i - 1]; s->a[idx] = func_0022CB88(); }
