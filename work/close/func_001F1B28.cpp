struct T { char p[0x13B8]; short h; char q[0x5D]; unsigned char b; };
struct S { char p[0xE3A8]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5();  virtual int g(); };
extern "C" int func_001E1868(S *, T *, int), func_001E17B8(S *);
extern "C" int func_001F1B28(S *s, T *t, int c) { if (!s->g()) return func_001E1868(s, t, c); int h = t->h; int m = func_001E17B8(s); int r = (h - 1) * m + t->b; return c ? r - 1 : r; }
