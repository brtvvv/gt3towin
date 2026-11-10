struct S { int x0, x4, x8; };
extern "C" int func_0026AD38(); extern "C" int func_001C0F50(S *, int);
extern "C" int func_001C0EF8(S *s) { int v = 0; if (s->x8) { int r = func_0026AD38(); v = func_001C0F50(s, s->x8); if (r) __asm__ volatile("ei"); } return v; }

