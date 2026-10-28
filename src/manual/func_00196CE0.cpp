struct M0 { virtual void g(int, int, int); }; struct M : M0 { char p[0xA478]; };
struct S { int a; M m[2]; };
extern "C" void func_00196CE0(S *s, int a, int b, int c) { M *m = s->m; for (int i = 0; i < 2; i++, m++) m->g(a, b, c); }
