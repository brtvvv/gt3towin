struct B { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3();  virtual int poll(); };
struct T : B { char p[0xFB94 - 4]; int x7B94; int x7B98; char q[8]; int a[3]; int r[3]; int pad; int st; int x7BC4; int x7BC8; int x7BCC; };
extern "C" void func_00286CE0(); extern "C" void func_00148A80(T *); extern "C" void func_00253458(int);
extern "C" void func_00148930(T *t) { for (;;) { if (t->r[0] >= 0) { t->a[0] = t->r[0]; t->r[0] = -1; } if (t->r[1] >= 0) { t->a[1] = t->r[1]; t->r[1] = -1; } if (t->r[2] >= 0) { t->a[2] = t->r[2]; t->r[2] = -1; }
 if (t->st != 4) { if (t->x7B94 || t->x7BC8) { t->st = 3; t->x7BC8 = 0; } if (t->x7BC4) { t->st = 2; t->x7BC4 = 0; } if (t->x7BCC) { t->st = 0; t->x7BCC = 0; } }
 t->x7B98 = t->poll(); switch (t->st) { case 4: t->st = 0; func_00286CE0(); continue; case 0: func_00148A80(t); break; case 2: case 3: break; } func_00253458(1); } }

