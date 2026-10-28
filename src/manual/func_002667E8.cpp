struct S { char p[0x24]; int f; int a; };
extern "C" int func_00289BD8(S *, int, int);
extern "C" void func_00287320(void);
extern "C" int func_002667E8(S *s) { do { if (func_00289BD8(s, s->a, 0) < 0) return 1; func_00287320(); } while (!s->f); func_00287320(); return 0; }

