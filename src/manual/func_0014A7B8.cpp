struct V { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual bool f4(); };
struct H { V *v; }; extern "C" H *func_0014ADD0();
extern "C" int func_0014A7B8() { H *h = func_0014ADD0(); if (h) return !h->v->f4(); return 0; }

