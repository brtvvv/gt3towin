extern "C" int func_0022CB88(void);
struct S { char p[0x150]; int a[12]; };
extern "C" void func_002130A8(S *s, int idx) { for (int i = 11; idx < i; i--) s->a[i] = s->a[i - 1]; s->a[idx] = func_0022CB88(); }
