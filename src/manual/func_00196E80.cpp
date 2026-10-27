struct V { virtual void f0(int); virtual void f1(int); virtual void f2(int); virtual void f3(int); virtual void f4(int); virtual void f5(int); virtual void f6(int); virtual void f7(int); virtual void f8(int); virtual void f9(int); virtual void f10(int); virtual void f11(int); virtual void f12(int); virtual void f13(int); virtual void f14(int); virtual void f15(int);  };
struct E : V { char p[0xA47C - 4]; };
struct S { int a; E e[2]; int idx; };
extern "C" void func_00196E80(S *s, int x) { E *e = &s->e[s->idx]; e->f3(x); }

