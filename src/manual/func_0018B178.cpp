struct P { int a, b; }; struct S { char p[0x94]; P q; };
extern "C" void func_0022AEF8(S *);
extern "C" void func_0018B178(S *s) { func_0022AEF8(s); P p; p.a = -1; p.b = -1; s->q = p; }

