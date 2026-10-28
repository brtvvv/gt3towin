struct X0 { char p[0x1C]; virtual void f0(); virtual void f1();  virtual void g(); };
struct X : X0 { char q[0xDC]; int flag; };
struct Y { char p[0x124]; int k; };
struct S { char p[0xFC]; int flag; char q[0x14]; Y *y; char r[8]; X *x; char t[0xC]; int on; };
extern "C" int func_001B4E20(S *);
extern "C" void func_001BB688(S *);
extern "C" void func_001B5100(S *s) { if (s->x && s->on) { int r = func_001B4E20(s); X *x = s->x; x->flag = r ^ 1; x->g(); return; } if (!s->y->k) { if (!func_001B4E20(s)) s->flag = 1; } func_001BB688(s); }
