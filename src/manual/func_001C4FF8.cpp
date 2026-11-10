struct S { int x0, x4; unsigned char *x8; };
extern int D_00353FC0;
extern "C" int func_001C3600(int); extern "C" S *func_001C36E8(int, int); extern "C" void func_001C4B20(int, int);
extern "C" void func_001C4FF8(int a, int b, int c, int d) { int r = func_001C3600(d); if (!r) return; S *s = func_001C36E8(d, r); if (!s) return; unsigned char *p = s->x8; int ch = (signed char)p[0]; if (!ch) ch = ' '; else if (ch & 0x80) ch = ((ch & 0xFF) << 8) | p[1]; func_001C4B20(D_00353FC0, ch); }

