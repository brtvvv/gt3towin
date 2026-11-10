struct O { char p[0x150]; virtual void f0(int); };
struct T { char p[0x3C]; int x3C, x40; char q[0x60 - 0x44]; O *x60; };
extern "C" int func_0026AD38();
extern "C" void func_001CDC40(T *t) { t->x40 = 0; t->x3C = 0; if (!t->x60) return; int r = func_0026AD38(); if (t->x60) t->x60->f0(3); t->x60 = 0; if (r) __asm__ volatile("ei"); }

