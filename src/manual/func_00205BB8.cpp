struct X { char p[4]; float a, b; };
struct S { char p[0x180]; X *x; char q[4]; float v; };
extern "C" int func_00205328(S *, int, int, int);
extern "C" float func_00205B60(S *, int, int);
extern "C" int func_00205BB8(S *s, int a, int b, int c) { int r = func_00205328(s, a, b, c); if (s->x) { float v = func_00205B60(s, a, c); X *x = s->x; s->v = (v - x->a) / (x->b - x->a); } return r; }
