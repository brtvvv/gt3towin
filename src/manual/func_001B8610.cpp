struct O { char p[0x1C]; virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9();  virtual int g(); };
struct C { char p[0x42]; unsigned short x42; };
struct T { char p[0xC]; C *c; char q[0x1DC - 0x10]; int x1DC, x1E0; char r[0xAE4 - 0x1E4]; int k; int a[2]; O *o[2]; char s[0xB50 - 0xAF8]; int xB50; int xB54; };
extern int D_003540E8, D_003540E4; extern "C" void func_001C0768(int); extern "C" void func_001B8A80(T *); extern "C" void func_001B7588(T *); extern "C" void func_001C3498(int); extern "C" void func_001C05F8(int, int); extern "C" void func_00253458(int);
extern "C" void func_001B8610(T *t) { C *c = t->c; if (c) { if (t->xB50) { func_001C0768(t->xB50); t->xB50 = 0; } if ((c->x42 & 0x30) == 0x20) { D_003540E8 = 0; D_003540E4 = 0; } if (c->x42 & 8) func_001B8A80(t); }
 if (t->o[t->k]) { t->xB54 = t->o[t->k]->g(); t->o[t->k] = 0; } if (!t->k) func_001B7588(t); func_001C3498(t->x1DC); if (t->x1E0) func_001C3498(t->x1E0);
 if (t->a[t->k]) { if (t->k > 0) func_001C05F8(t->a[t->k], 0); else func_001C0768(t->a[t->k]); t->a[t->k] = 0; } func_00253458(2); }

