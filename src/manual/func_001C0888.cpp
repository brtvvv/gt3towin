struct S { int x0, x4, x8; };
extern "C" int func_0026AD38(); extern "C" void func_001C0818(int);
extern "C" void func_001C0888(S *s) { if (!s->x8) return; int r = func_0026AD38(); func_001C0818(s->x8); s->x8 = 0; if (r) __asm__ volatile("ei"); }

