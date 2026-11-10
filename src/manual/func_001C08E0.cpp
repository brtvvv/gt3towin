struct S { int x0, x4, x8; char p[0x20 - 0xC]; int x20; };
extern "C" int func_0026AD38(); extern "C" void func_001C0940(S *, S *, int);
extern "C" void func_001C08E0(S *s) { if (s->x20) return; int r = func_0026AD38(); if (s->x8) func_001C0940(s, s, s->x8); if (r) __asm__ volatile("ei"); }

