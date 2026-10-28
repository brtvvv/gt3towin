struct S { char p[0x24]; int f; };
extern "C" int func_00289BD8(S *, int, int);
extern "C" void func_0026ADD8(void);
extern "C" void func_0025C2B8(S *s, int a, int b) { s->f = 0; for (;;) { while (func_00289BD8(s, a, b) < 0) func_0026ADD8(); func_0026ADD8(); if (s->f) break; } }
