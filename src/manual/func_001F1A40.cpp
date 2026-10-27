struct T { char p[0x40]; int a; int b; }; struct S { T *t; };
extern "C" void func_001F4550(S *);
extern "C" void func_001F1A40(S *s) { func_001F4550(s); T *t = s->t; t->a = -2; t->b = 0x157529FF; }

