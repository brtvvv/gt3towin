struct V { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18(); virtual void f19(); virtual void f20(); virtual void f21(); virtual void f22(); virtual void f23();  };
struct L { int a, b; int *arr; }; struct S { char p[0x18]; L *l; char q[0x3C - 0x1C]; V *v; };
extern "C" int func_00177E00(int);
extern "C" void func_0017B770(S *s) { s->v->f23(); func_00177E00(s->l->arr[0]); }

