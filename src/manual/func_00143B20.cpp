struct B0 { char p[8]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6();  virtual char *g(); };
struct S : B0 { char q[0x50]; int x5C; char r[0x10]; char m[0x44]; int xB4; };
extern "C" char *func_00143230(S *, char *);
extern "C" int func_00240F88(int, char *, char *, int, int), func_00241B50(int);
extern "C" void func_00142E80(char *);
extern "C" int func_00143B20(S *s, int x) { char b[0x50]; char *p = func_00143230(s, b); if (func_00240F88(x, p, s->m, 0, 0x200)) return 0; if (func_00241B50(x) < 0x200) return 0; s->xB4 = 0; func_00142E80(s->g()); s->x5C = 1; return 1; }
