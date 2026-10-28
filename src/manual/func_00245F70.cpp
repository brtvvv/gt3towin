struct S { int a; int b; int c; int d; };
extern "C" int func_002530C8(int);
extern "C" void func_00255C48(int, int, int, int, int, int, int, int), func_00253198(int);
extern "C" void func_00245F70(S *s, int a, int b) { int old = func_002530C8(1); func_00255C48(s->a, b, s->c, 0, 0, s->c, s->d, a); func_00253198(0x20000); func_002530C8(0); func_00253198(0x10000); func_002530C8(old); }
