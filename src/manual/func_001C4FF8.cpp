struct T { char p[8]; unsigned char *s; };
extern int D_00353FC0;
extern "C" int func_001C3600(int);
extern "C" T *func_001C36E8(int, int);
extern "C" void func_001C4B20(int, int);
extern "C" void func_001C4FF8(int, int, int, int x) { int r = func_001C3600(x); if (!r) return; T *t = func_001C36E8(x, r); if (!t) return; unsigned char *p = t->s; int c = (signed char)p[0]; if (!c) c = 0x20; else if (c & 0x80) c = ((c & 0xFF) << 8) | p[1]; func_001C4B20(D_00353FC0, c); }
